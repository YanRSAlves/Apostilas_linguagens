// Introdu‡Æo ao modo gr fico - Fun‡Æo do 2o. grau
// Curso de Linguagem de Programa‡Æo C++ PROG023.CPP - Silvio Sabino

#include<graphics.h>
#include<iostream.h>
#include<conio.h>


// parƒmetros e vari vel da fun‡Æo
float *p, x;

// retornando o valor da fun‡Æo do segundo grau
float bhaskara(void){
	return(p[0]*x*x+p[1]*x+p[2]);
}

// desenhando o gr fico na tela em escala 10:1
// observe o uso de continue
void plot(float (*funcao)(void)){
	float y;
	for(x=-32;x<32;x+=0.0001){
		if((y=funcao())>24||y<-24)continue;
		putpixel(x*10+320,y*10+240,15);
	}
}

void main(void){

	//declarando um int register para uso nos la‡os
	 register int i;

	// para a fun‡Æo espec¡fica
	float (*funcao)(void)=bhaskara;

	// alocando espa‡o para 3 parƒmetros da fun‡Æo
	p=new float[3];

	// limpando a tela
	clrscr();

	//solicitando os dados para o usu rio
	for(i=0;i<3;i++){
		cout << "Digite o parƒmetro \""<<(!i?"A":i==1?"B":"C")<<"\": ";
		cin  >> p[i];
	}

	//iniciando o modo gr fico
	int d=DETECT,m;
	initgraph(&d,&m,"C:\\ARQUIV~1\\TC\\BGI");

	// especificando azul como cor de fundo azul e
	// cinza claro como cor da linha
	setbkcolor(1);
	setcolor(7);

	// desenhando os eixos na tela
	line(0,240,639,240);
	line(320,0,320,479);
	for(i=0;i<640;i+=10){
		line(i,238,i,242);
		if(i<480)line(318,i,322,i);
	}

	// chamando a fun‡Æo que desenha o grafico
	plot(funcao);

	// esperando o usuario pressionar um tecla
	getch();

	// fechando o modo grafico
	closegraph();
}
