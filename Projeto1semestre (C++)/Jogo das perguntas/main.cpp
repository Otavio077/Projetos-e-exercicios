#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <Windows.h>
#include <mmsystem.h>

using namespace std;

void questoes(int numeroQuestao);
void chamarUniversitarios(int questao);
void vida();
void pontos(int questao);
void resultado(int resposta, int respostaCerta, int universitarios);
void premios();
void status(int questao);

int pontuacao = 0, totalVida = 3, ajudasRestantes = 2;

int main() {
	
	int inicio, numeroQuestao;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << " #####                     #######                                             #####                                " << endl;
	cout << "#     # #    # # ######    #       # #      #    # ######  ####     ######    #     # ###### #####  # ######  ####  " << endl;
	cout << "#     # #    # #     #     #       # #      ##  ## #      #         #         #       #      #    # # #      #      " << endl;
	cout << "#     # #    # #    #      #####   # #      # ## # #####   ####     #####      #####  #####  #    # # #####   ####  " << endl;
	cout << "#   # # #    # #   #       #       # #      #    # #           #    #               # #      #####  # #           # " << endl;
	cout << "#    #  #    # #  #        #       # #      #    # #      #    #    #         #     # #      #   #  # #      #    # " << endl;
	cout << " #### #  ####  # ######    #       # ###### #    # ######  ####     ######     #####  ###### #    # # ######  ####  " << endl;
	printf("\nFeito por Ot�vio Lobo e Jo�o In�cio");
	
 	printf("\n\nBem vindo ao nosso quiz sobre filmes e s�ries!!\n\nTemos 30 quest�es, sendo 10 de cada nivel de dificuldade (Facil, M�dio, Dificil).\nAs quest�es nivel facil valem 1 ponto, m�dias 2 pontos e dificies 3 pontos.\nVoc� inicia com 3 vidas e 2 ajudas de universitarios!\nSua pontua��o definira seu pr�mio no final!");
 	printf("\n\nPressione 1 para iniciar ou 0 para sair:\n");
 	scanf("%d", &inicio);
 	system("cls");
 	if(inicio == 0){
 		exit(0);
	}

	questoes(numeroQuestao = 1);
 	
	premios();
 	
	return 0;
}

void questoes(int numeroQuestao){
	
	int resposta;
		
		switch(numeroQuestao){
			
			//resultado(resposta, respostaCerta, universitarios);
			
			case 1:
				printf("\nQuest�es nivel FACIL:\n\n");
				printf("1 - Qual � o nome em portugu�s de Star Wars\n\n\t(1) - Guerra nas Galaxias\n\t(2) - Guerra nas Estrelas\n\t(3) - Guerra nos Cosmos\n\t(4) - Guerra dos Planetas\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 1);
				
			case 2:
				printf("2 - A frase \"Ao infinito e al�m!\" � dita por qual personagens de desenhos infantis?\n\n\t(1) - Pica Pau\n\t(2) - Woods\n\t(3) - Buzz Lightyear\n\t(4) - Homem Aranha\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 2);
				
			case 3:
				printf("3 - O lema \"Sem sacrif�cio n�o h� vit�ria\" pertence a qual filme?\n\n\t(1) - Transformers\n\t(2) - Velozes e Furiosos\n\t(3) - Vingadores\n\t(4) - At� o Ultimo Homem\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 3);
				
			case 4:
				printf("4 - A frase \"Cavalheiros, sempre se lembrar�o deste dia quando quase capturaram o Capit�o Jack Sparrow!\" � dita em qual filme?\n\n\t(1) - Jumanji\n\t(2) - Velozes e Furiosos\n\t(3) - John Wick\n\t(4) - Piratas do Caribe\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 4, 4);
				
			case 5:
				printf("5 - Em qual desses filmes afundou o navio mais famoso do mundo?\n\n\t(1) - Titanic\n\t(2) - Piratas do Caribe\n\t(3) - Poseidon\n\t(4) - Tubar�o\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 5);
			
			case 6:
				printf("6 - Qual o nome em Ingl�s de Vingadores?\n\n\t(1) - Warlords\n\t(2) - John\n\t(3) - Ultrawar\n\t(4) - Avengers\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 4, 6);
				
			case 7:
				printf("7 - Complete o nome do filme: Harry Potter e a C�mara ...\n\n\t(1) - Azul\n\t(2) - Secreta\n\t(3) - Magica\n\t(4) - Transformadora\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 7);
				
			case 8:
				printf("8 - Como chama a personagem a quem Woody de Toy Story pertence?\n\n\t(1) - Andrew\n\t(2) - Andy\n\t(3) - Angy\n\t(4) - Arnold\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 8);
				
			case 9:
				printf("9 - Quem � o companheiro de Sherek em suas viagens?\n\n\t(1) - Bode\n\t(2) - Jegue\n\t(3) - Burro\n\t(4) - Cavalo\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 9);
				
			case 10:
				printf("10 - Qual o nome da bola no filme O N�ufrago?\n\n\t(1) - Wilson\n\t(2) - Willian\n\t(3) - Walter\n\t(4) - Watson\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 10);
				
			case 11:
				printf("Quest�es nivel M�DIO:\n\n");
				printf("11 - Qual era o nome do vil�o que utilizava um chap�u em Invoca��o do Mal?\n\n\t(1) - Anabelle\n\t(2) - Homem Torto\n\t(3) - Freira\n\t(4) - Jason\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 11);
				
			case 12:
				printf("12 - O filme \"O Massacre da Serra El�trica\" se passa em qual pais?\n\n\t(1) - Canada\n\t(2) - Russia\n\t(3) - Estados Unidos\n\t(4) - Brasil\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 12);
				
			case 13:
				printf("13 - No Filme Velozes e Furiosos Desafio em Tokio, qual o nome do carro azul que o Shawn destruiu?\n\n\t(1) - Eleanor\n\t(2) - Relampago McQueen\n\t(3) - Mona Lisa\n\t(4) - Renegade\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 13);
				
			case 14:
				printf("14 - No filme Psicose (1960) qual o nome do assassino?\n\n\t(1) - Norman Bates\n\t(2) - Willian Johnson\n\t(3) - Gregory\n\t(4) - Jane Lopes\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 14);
				
			case 15:
				printf("15 - Na s�rie \"Supernatural\", Castiel � um:\n\n\t(1) - Dem�nio\n\t(2) - Zumbi\n\t(3) - Anjo\n\t(4) - Deus\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 15);
				
			case 16:
				printf("16 - Qual o nome do ator que interpretou Indiana Jones?\n\n\t(1) - Henry Cavill\n\t(2) - Harrison Ford\n\t(3) - Mel Gibson\n\t(4) - John Travolta\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 16);
			
			case 17:
				printf("17 - Em qual pa�s foi gravado Supernatural?\n\n\t(1) - Estados Unidos\n\t(2) - Mexico\n\t(3) - Canada\n\t(4) - China\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 17);
				
			case 18:
				printf("18 - Na s�rie Todo Mundo Odeia o Chris, qual � a reputa��o de Chris?\n\n\t(1) - Melhor Jogador de Asteroids\n\t(2) - Melhor Lutador de Karate\n\t(3) - Melhor Comediante\n\t(4) - Melhor surra do ano\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 18);
				
			case 19:
				printf("19 - Em Star Wars Episode V (1980), qual a revela��o que Darth Vader faz a Luke Skywalker?\n\n\t(1) - Ser tio de Luke\n\t(2) - Ser irm�o de Luke\n\t(3) - Ser pai de Luke\n\t(4) - Ser av� de Luke\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 19);
				
			case 20:
				printf("20 - Em qual pa�s foi gravado o Condado de Senhor dos An�is?\n\n\t(1) - S�o Paulo\n\t(2) - Africa\n\t(3) - Peru\n\t(4) - Nova Zel�ndia\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 4, 20);
				
			case 21:
				printf("Quest�es nivel DIFICIL\n\n");
				printf("21 - Qual dos filmes abaixo foi um porte dos v�deos games para o cinema?\n\n\t(1) - Silent Hill\n\t(2) - Piratas do Caribe\n\t(3) - A Aut�psia\n\t(4) - O Sil�ncio\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 21);
				
			case 22:
				printf("22 - Qual dessas m�sicas tocou no final da s�rie \"Todo Mundo Odeia o Chris?\"\n\n\t(1) - Living On a Prayer (Bon Jovi)\n\t(2) - Rock You Like a Hurricane (Scorpions)\n\t(3) - Every Breath You Take (The Police)\n\t(4) - The Man Who Sold The world (Nirvana)\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 22);
				
			case 23:
				printf("23 - No filme \"60 Segundos\", quantos carros Randall Memphis precisava roubar para salvar seu irm�o Kip?\n\n\t(1) - 10\n\t(2) - 50\n\t(3) - 70\n\t(4) - 100\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 23);
				
			case 24:
				printf("24 - No filme \"Mad Max Estrada da F�ria\", qual era a carga falsa que o caminh�o de Max transportava?\n\n\t(1) - �gua\n\t(2) - Areia\n\t(3) - �r\n\t(4) - Gasolina\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 24);
				
			case 25:
				printf("25 - Em \"John Wick\", qual � o carro do John Wick?\n\t(1) - Ford Mustang\n\t(2) - Chevy Camaro\n\t(3) - Fiat Uno\n\t(4) - Honda Civic\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 1, 25);
				
			case 26:
				printf("26 - Qual � a senha utilizada por Bruce Banner no Queen Jet do Tony Stark\n\n\t(1) - Hulk Esmaga\n\t(2) - Cavalo Marinho\n\t(3) - 69420\n\t(4) - Vingador Mais Forte\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 4, 26);
				
			case 27:
				printf("27 - Qual � a m�sica tocada no in�cio do filme Guardi�es da Gal�xia (2014)?\n\n\t(1) - I Want You Back\n\t(2) - Come And Get Your Love\n\t(3) - Fooled Around and Feel in love\n\t(4) - Hooked On A Feeling\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 27);
				
			case 28:
				printf("28 - Qual o modelo do carro do Dean Winchester em Supernatural?\n\n\t(1) - Chevette\n\t(2) - Fiat Marea\n\t(3) - Chevy Impala\n\t(4) - Chevy Corvette\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 28);
				
			case 29:
				printf("29 - Em Senhor dos Aneis, a malha dada ao Frodo era de:\n\n\t(1) - Metal\n\t(2) - A�o\n\t(3) - Mithril\n\t(4) - Estanho\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 3, 29);
				
			case 30:
				printf("30 - Em Vingadores Guerra Infinita (2018), quantos finais Doutor Estranho viu no avan�o temporal?\n\n\t(1) - 14.605.000\n\t(2) - 14.000.605\n\t(3) - 14.006.500\n\t(4) - 14.060.005\n\n\t(0) - Universit�rios\n\t(9) - Checar status\n");
				resultado(resposta, 2, 30);
		}
}

void resultado(int resposta, int respostaCerta, int questao){
	
	scanf("%d", &resposta);
	
	if(resposta == 0){
		chamarUniversitarios(questao);
	}
	
	else if(resposta == 9){
		status(questao);
	}
	
	else if(resposta == respostaCerta){
	
		printf("\n##CORRETO!##\n");
		system("color 2F");
		PlaySound(TEXT("acerto.wav"),NULL,SND_SYNC);
		system("color 07");
		system("cls");
		
		pontos(questao);
		
		if(questao == 30){
			premios();
		}
	}
	
	else{
		
		system("color 40");
		PlaySound(TEXT("erro.wav"),NULL,SND_SYNC);
		system("color 07");
		system("cls");
		vida();
	}
}

void chamarUniversitarios(int questao){

	
	if(ajudasRestantes == 0){
		system("cls");
		printf("\nVoc� n�o pode mais chamar os universit�rios!\n\n");
		PlaySound(TEXT("universitario2.wav"),NULL,SND_SYNC);
		questoes(questao);
	}
	
	ajudasRestantes--;
	
	system("cls");
	
	if(ajudasRestantes == 0){
		system("cls");
		printf("\nVoc� chamou os universit�rios pela ultima vez!\n");
	}
	
	else{
		printf("\nVoc� ainda pode chamar %d vez(es) os universit�rios!\n", ajudasRestantes);
	}
	
	PlaySound(TEXT("universitario.wav"),NULL,SND_SYNC);
	
	switch(questao){
		case 1:
			printf("\n### Dica: STAR ###\n\n");
			questoes(1);
			
		case 2:
			printf("\n### Dica: Ele usa um capacete. ###\n\n");
			questoes(2);
		
		case 3:
			printf("\n### Dica: Azul e vermelho. ###\n\n");
			questoes(3);
		
		case 4:
			printf("\n### Dica: Ele � um CAPIT�O, portanto comanda uma tri.....\n\n ###\n\n");
			questoes(4);
		
		case 5:
			printf("\n### Dica: \"Foi h� 87 anos...\" ###\n\n");
			questoes(5);
			
		case 6:
			printf("\n### Dica: Qual a letra que fica na torre dos Vingadores? ###\n\n");
			questoes(6);
			
		case 7:
			printf("\n### Dica: � segredo, ninguem sabe. ###\n\n");
			questoes(7);
			
		case 8:
			printf("\n### Dica: D-N-A-Y ###\n\n");
			questoes(8);
			
		case 9:
			printf("\n### Dica: Faz parte da express�o \"... de carga\" ###\n\n");
			questoes(9);
		
		case 10:
			printf("\n### Dica: SOLINW ###\n\n");
			questoes(10);
			
		case 11:
			printf("\n### Dica: Tamb�m usa uma bengala e anda de uma forma n�o muito \"reta\"\n\n");
			questoes(11);
			
		case 12:
			printf("\n### Dica: Azul, vermelho e branco ###\n\n");
			questoes(12);
			
		case 13:
			printf("\n### Dica: Nome de uma obra de arte. ###\n\n");
			questoes(13);
		
		case 14:
			printf("\n### Dica: Um nome bem \"normal\" ####\n\n");
			questoes(14);
			
		case 15:
			printf("\n### Dica: Ele � do time do BEM ###\n\n");
			questoes(15);
			
		case 16:
			printf("\n### Dica: O sobrenome � uma MARCA. ###\n\n");
			questoes(16);
			
		case 17:
			printf("\n### Dica: Pais localizado na Am�rica do Norte colonizado por franceses. ###\n\n");
			questoes(17);
			
		case 18:
			printf("\n### Dica: Fliperama ###\n\n");
			questoes(18);
			
		case 19:
			printf("\n### Dica: Av� do seu filho ###\n\n");
			questoes(19);
			
		case 20:
			printf("\n### Dica: N�o � nem um pouco VELHO ###\n\n");
			questoes(20);
		
		case 21:
			printf("\n### Dica: Montanha Silenciosa... ###\n\n");
			questoes(21);
		
		case 22:
			printf("\n### Dica: A mais animada da lista ###\n\n");
			questoes(22);
			
		case 23:
			printf("\n### Dica: 200 / 4 ###\n\n");
			questoes(23);
			
		case 24:
			printf("\n### Dica: Material mais denso ###\n\n");
			questoes(24);
			
		case 25:
			printf("\n### Dica: CAVALO ###\n\n");
			questoes(25);
			
		case 26:
			printf("\n### Dica: O mais PODEROSO ###\n\n");
			questoes(26);
			
		case 27:
			printf("\n### Dica: Venha e Pegue Seu Amor ###\n\n");
			questoes(27);
			
		case 28:
			printf("\n### Dica: Impalador ###\n\n");
			questoes(28);
			
		case 29:
			printf("\n### Dica: O material mais incomum da lista ###\n\n");
			questoes(29);
			
		case 30:
			printf("\n### Dica: O menor valor ###\n\n");
			questoes(30);
	}
}

void vida(){
	totalVida--;
	printf("\nERRADO, - 1 vida, total de %d vida(s)\n\n", totalVida);
	if(totalVida == 0){
		system("cls");
		printf("\nAcabaram suas vidas!\n\n");
		premios();
	}
}

void pontos(int questao){
	
	if(questao >= 1 && questao <= 10){
	pontuacao = pontuacao + 1;
	printf("\nVoc� tem %d ponto(s)\n\n", pontuacao);
	}
	
	if(questao > 10 && questao <= 20){
	pontuacao = pontuacao + 2;
	printf("\nVoc� tem %d ponto(s)\n\n", pontuacao);
	}
	
	if(questao > 20 && questao <= 30){
	pontuacao = pontuacao + 3;
	printf("\nVoc� tem %d ponto(s)\n\n", pontuacao);
	}
}

void premios(){
	
	
	if(pontuacao <=10){
		
		printf("Mais sorte da proxima vez... Infelizmente sua pontua��o foi de apenas %d ponto(s), portanto seu pr�mio � de R$20,00", pontuacao);
		printf("\n\n...");
		system("color 07");
		PlaySound(TEXT("astronomia.wav"),NULL,SND_SYNC);
	}
	
	else if(pontuacao >= 10 && pontuacao <= 20){
		
		printf("Boa jogada, sua pontua��o total foi de %d ponto(s), portanto seu pr�mio � R$250,00", pontuacao);
		printf("\n\nEnjoy the music!!");
		system("color 1F");
		sleep(2);
		PlaySound(TEXT("rockyou.wav"),NULL,SND_SYNC);
	}
	
	else if(pontuacao > 20 && pontuacao <= 40){
		
		printf("PARAB�NS!, sua pontua��o total foi de %d ponto(s), portanto seu pr�mio � R$500,00", pontuacao);
		printf("\n\nEnjoy the music!!");
		system("color 1F");
		sleep(2);
		PlaySound(TEXT("rockyou.wav"),NULL,SND_SYNC);
	}
	
	else{
		
		printf("LEND�RIO, sua pontua��o total foi de %d ponto(s), portanto seu pr�mio � R$1.000,00", pontuacao);
		printf("\n\nEnjoy the music!!");
		system("color 1F");
		sleep(2);
		PlaySound(TEXT("rockyou.wav"),NULL,SND_SYNC);
	}
	
	exit(0);
}

void status(int questao){
	
	int faltam;
	
	faltam = 30 - questao;
	
	system("cls");
	printf("Voc� ainda tem: %d vida(s\n\nVoc� ainda pode chamar: %d veze(s) os universit�rios\n\nVoc� est� na quest�o: %d e ainda faltam %d quest�es para finalizar!\n\n\nAperte ESPA�O para voltar ao jogo.\n\n", totalVida, ajudasRestantes, questao, faltam);
	system("pause");
	system("cls");
	questoes(questao);
}
