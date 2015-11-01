#pragma option -ms
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asm_name.h"
#include "dir_name.h"
#include "id_name.h"
#include "res_name.h"
#include "res.h"

#define SORTSIZE 50

int table[53];
unsigned char *outbuf;
FILE *out;

void InitList(char **keylist,int type);

void OpenFile(char *name)
{
	if((out=fopen(name,"wt"))==NULL){
		puts("Not open output file");
		exit(1);
	}
	fputs("/* Этот файл сгенерирован программой 'FASTLIST.EXE' */\n\n",out);
}

void main()
{
//char buf[60];
int lastlit;
int k,y,i;
unsigned char *ii,*jj;
	InitList(Mnemonics,0);
	OpenFile("asmnemon.h");
	fputs("short ofsmnem[26]={\n",out);
	for(i=0;;i++){
		if(table[i+1]!=-1)lastlit=i+1;
		else if(table[i]!=-1)lastlit=i;
		fprintf(out,"\t0x%04X,0x%04X",table[i],table[i+1]);
		if(i==24)break;
		fprintf(out,",\t//%c %c\n",i+'A',i+1+'A');
		i++;
	}
	fputs("};\t//Y Z\n\nunsigned char asmMnem[]={\n",out);
	for(i=0;i<26;i++){
		y=table[i];
		if(y!=-1){
			ii=outbuf+y;
			for(;;ii++){
				k=*(short *)&*ii;
				if(k==-1){
					fprintf(out,"\t0xFF,0xFF%s\t// end char \'%c\'\n",i==lastlit?"":",",i+'A');
					ii+=2;
					break;
				}
				fprintf(out,"\t0x%02X,0x%02X,",(unsigned char *)*ii,(unsigned char *)*(ii+1));
				ii+=2;
				jj=ii;
				for(;*ii!=0;ii++)fprintf(out,"0x%02X,",(unsigned char *)*ii);
				fprintf(out,"0,\t// %c%s\n",i+'A',jj);
			}
		}
	}
	fputs("};\n",out);
	free(outbuf);
	fclose(out);

	InitList(dirlist,1);
	OpenFile("dirlist.h");
	fputs("short ofsdir[27]={\n",out);
	for(i=0;;i++){
		if(table[i+1]!=-1)lastlit=i+1;
		else if(table[i]!=-1)lastlit=i;
		fprintf(out,"\t0x%04X,0x%04X",table[i],table[i+1]);
		if(i==24)break;
		fprintf(out,",\t//%c %c\n",i==0?'D':i+0x60,i+'a');
		i++;
	}
	fprintf(out,",\t//x y\n\t0x%04X};\t//z \n\nunsigned char dirlist[]={\n",table[26]);
	for(i=0;i<27;i++){
		y=table[i];
		if(y!=-1){
			ii=outbuf+y;
			for(;;ii++){
				k=*(short *)&*ii;
				if(k==-1){
					fprintf(out,"\t0xFF,0xFF%s\t// end char \'%c\'\n",i==lastlit?"":",",i==0?'D':i+0x60);
					ii+=2;
					break;
				}
				fprintf(out,"\t0x%02X,0x%02X,",(unsigned char *)*ii,(unsigned char *)*(ii+1));
				ii+=2;
				jj=ii;
				for(;*ii!=0;ii++)fprintf(out,"0x%02X,",(unsigned char *)*ii);
				fprintf(out,"0,\t// %c%s\n",i==0?'D':i+0x60,jj);
			}
		}
	}
	fputs("};\n",out);
	free(outbuf);
	fclose(out);

	InitList(ID,2);
	OpenFile("id.h");
	fputs("short idofs[53]={\n",out);
	for(i=0;;i++){
		if(table[i]!=-1)lastlit=i;
		if(table[i+1]!=-1)lastlit=i+1;
		fprintf(out,"\t0x%04X,0x%04X",table[i],table[i+1]);
		if(i==50)break;
		fprintf(out,",\t//%c %c\n",i>=26?(i==26?'_':i+'a'-27):i+'A',
				i>=26?i+'a'-26:i+'B');
		i++;
	}
	fprintf(out,",\t//x y\n\t0x%04X};\t//z \n\nunsigned char id[]={\n",table[52]);
	int i1=0;
	for(i=0;i<53;i++){
		y=table[i];
		if(y!=-1){
			ii=outbuf+y+i1;
			for(;;ii++){
				k=*(short *)&*ii;
				if(k==-1){
					fprintf(out,"\t0xFF,0xFF%s\t// end char \'%c\'\n",i==lastlit?"":",",i>=26?(i==26?'_':i+'a'-27):i+'A');
					ii+=2;
					break;
				}
				fprintf(out,"\t0x%02X,0x%02X,",(unsigned char *)*ii,(unsigned char *)*(ii+1));
				ii+=2;
				jj=ii;
				for(;*ii!=0;ii++)fprintf(out,"0x%02X,",(unsigned char *)*ii);
				fprintf(out,"0,\t// %c%s\n",i>=26?(i==26?'_':i+'a'-27):i+'A',jj);
			}
		}
	}
	fputs("};\n",out);
	free(outbuf);
	fclose(out);

	InitList(res_name,3);
	OpenFile("resname.h");
	fputs("short ofsres[26]={\n",out);
	for(i=0;;i++){
		if(table[i]!=-1)lastlit=i;
		if(table[i+1]!=-1)lastlit=i+1;
		fprintf(out,"\t0x%04X,0x%04X",table[i],table[i+1]);
		if(i==24)break;
		fprintf(out,",\t//%c %c\n",i+'a',i+1+'a');
		i++;
	}
	fputs("};\t//y z\n\nunsigned char resMnem[]={\n",out);
	for(i=0;i<26;i++){
		y=table[i];
		if(y!=-1){
			ii=outbuf+y;
			for(;;ii++){
				k=*(short *)&*ii;
				if(k==-1){
					fprintf(out,"\t0xFF,0xFF%s\t// end char \'%c\'\n",i==lastlit?"":",",i+0x61);
					ii+=2;
					break;
				}
				fprintf(out,"\t0x%02X,0x%02X,",(unsigned char *)*ii,(unsigned char *)*(ii+1));
				ii+=2;
				jj=ii;
				for(;*ii!=0;ii++)fprintf(out,"0x%02X,",(unsigned char *)*ii);
				fprintf(out,"0,\t// %c%s\n",i+'a',jj);
			}
		}
	}
	fputs("};\n",out);
	free(outbuf);
	fclose(out);
}

void InitList(char **keylist,int type)
/*-----------------22.11.99 19:35-------------------
 type: 0 - 26 больших букв с возможностью пропуска - строка "-" 2-байтовый идентификатор
			 1 - 26 маленьких букв и 'D'
			 2 - 26 маленьких и больших букв и символ '_' 2-юайтовый идентификатор
	--------------------------------------------------*/
{
unsigned char *i;
short j;
short num=0;
char c;
	if((outbuf=(char *)malloc(SORTSIZE*1024))==NULL){
		puts("Not enough memory for the compiler's buffers.");
		exit(1);
	}
	for(j=0;keylist[j]!=NULL;j++){
		i=outbuf+num*SORTSIZE;
		if(strcmp(keylist[j],"-")==0)continue;
 		*(short *)&*i=(type==2?IDvalue[j]:j);
		i+=2;
		int k=0;
		char firstchar=keylist[j][k];
		char c;
		do{
			c=keylist[j][k++];
			if(c=='/'){
				*i=0;
				num++;
				i=outbuf+num*SORTSIZE;
		 		*(short *)&*i=(type==2?IDvalue[j]:j);
				i+=2;
				c=firstchar;
			}
			*i++=c;
		}while(c!=0);
		num++;
	}
//сортировка
	for(j=0;j<num;j++){
		i=outbuf+j*SORTSIZE;
		for(int k=j+1;k<num;k++){
			char *ii=outbuf+k*SORTSIZE;
			if(strcmp((char *)&i[2],&ii[2])>0){
				char buf[SORTSIZE];
				memcpy(buf,i,SORTSIZE);
				memcpy(i,ii,SORTSIZE);
				memcpy(ii,buf,SORTSIZE);
			}
		}
	}
	for(j=0;j<53;j++)table[j]=-1;
//конечная таблица
	i=outbuf;
	char cc=0;
	for(j=0;j<num;j++){
		char *ii=outbuf+SORTSIZE*j;
		if(ii[2]!=cc){	//новая буква
			if(cc!=0){	//не начало таблицы
				*(short *)&*i=-1;	//признак конца буквы
				i+=2;
			}
			cc=ii[2];
			switch(type){
				case 0:
					table[cc-'A']=i-outbuf;
					break;
				case 1:
					if(cc=='D')table[0]=i-outbuf;
					else table[cc-0x60]=i-outbuf;
					break;
				case 2:
					if(cc=='_')table[26]=i-outbuf;
					else if(cc>='A'&&cc<='Z')table[cc-'A']=i-outbuf;
					else table[cc-'a'+27]=i-outbuf;
					break;
				case 3:
					table[cc-'a']=i-outbuf;
					break;
			}
		}
		*(short *)&*i=*(short *)&*ii;
		i+=2;
		ii+=3;
		char c;
		do{
			c=*ii++;
			*i++=c;
		}while(c!=0);
	}
	*(short *)&*i=-1;
}
