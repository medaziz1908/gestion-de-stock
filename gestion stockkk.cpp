//#include <iostream>
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
#include<windows.h>
#include<unistd.h>

//---------------------
//#define maxtab 5
#define mx 25
#define l 201
#define hl 205
#define m 187
#define al 185
#define h 200
#define p 204
#define n 188
#define vl 186
#define cp 254
#define d 203
#define f 202


//interface------------
void anim();
void gotoxy(short,short);

int menu0();




//-----------declaration des fonctions , procedures et structures menu111111111111-----------
int menu1();

typedef struct {
	int identifiant  ;
	char designation [15] ;
	float prix_d_achat ;
	float prix_d_vente ;
	float TVA ;
	char date_de_fabrication [10];
	char date_d_expiration [10];
	char depot [10];
	int quantite ;
	int seuil_de_repture ;
}typeart;

typedef struct Elem
{
	typeart Donnee;
	struct Elem * Suivant;
}TypeElem;


void InitList(TypeElem ** L);
void AjoutList(TypeElem ** L, typeart);
int SupprimeList(TypeElem ** L, int ID);
int RechercheList(TypeElem * L, int ID);
int ModifierList(TypeElem * L, typeart A);
int GetID() ;
typeart GetItem();

//-----------declaration des fonctions , procedures et structures menu2222222222222222-----------
int menu2();
typedef struct client_fournisseur {
	int identifiant ;
	char nom [15] ;
	char adresse[20] ;
	char ville [10] ;
	char telephone [8];
	int type ;
}typecf ;


typedef struct Elem2
{
	typecf Donnee2;
	struct Elem2 * Suivant;
}TypeElem2;


void InitList2(TypeElem2 ** L2);
void AjoutList2(TypeElem2 ** L2, typecf);
int SupprimeList2(TypeElem2 ** L2, int ID);
int RechercheList2(TypeElem2 * L2, int ID);
int ModifierList2(TypeElem2 * L2, typecf A);
int GetID2() ;
typecf GetItem2();


//------------declaration des fonctions ,procedures et structures menu3--------------------------
int menu3();
typedef struct AchatVente {
	int identifiant ;
	char ID_Article [10];
	char ID_CF[10];
	int Type;
	char Date [10] ;
	int Quantite;

}typeAV ;
typedef struct Elem3
{
	typeAV Donnee3;
	struct Elem3 * Suivant;
}TypeElem3;

int UNIQUE(char IDENT);
void InitList3(TypeElem3 ** L3);
void AjoutList3(TypeElem3 ** L3, typeAV);
int SupprimeList3(TypeElem3 ** L3, int ID);
int GetID3() ;
int RechercheList3(TypeElem3 * L3, int ID);
int ModifierList3(TypeElem3 *L3, typeAV D);
void afficheliste3(TypeElem3 *L3);

typeAV GetItem3();



//*******principal----------------------------
int main(){

gotoxy(0,4);
anim();
sleep(1);
system("cls");
gotoxy(0,8);
anim();
sleep(1);
system("cls");
gotoxy(0,12);
anim();
sleep(1);
system("cls");

int choix,choice;

do{
choix=menu0();

switch(choix){

case 1 : choice=menu1();

break;

case 2 : choice=menu2();

break;


case 3 :choice=menu3();

break;
case 4 :system("cls");
    anim();
    sleep(2);
    system("cls");
return EXIT_SUCCESS;
break;
    }

}while(choix>=1 || choix<=4);





}



//----------------menu00000000
int menu0()
{   system ("color e2");
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    gotoxy(0,4);
	int choix,i;
	char mot1[]="1-LA GESTION DES ARTICLES ",mot0[]="      WELCOME TO MALA DEAL.INC",mot2[]="2-LA GESTION DES CLIENTS ET FOURNISSEUR",mot3[]="3-LA GESTION D OPERATION V/A",mot4[]="4-exit",mot7[]="donner votre choix:",mot9[]="version 1.0.0 09/04/2001";
	SetConsoleTextAttribute(hConsole,11);
	printf("%c",l);
	for(i=0;i<=mx+14;i++)
	{ system ("color e1");
			printf("%c",hl);
	}
		printf("%c",m);
	//affich menu

	printf("\n%c",vl);

	printf("%s\t",mot0);

	  printf("%10c",vl);

		//1  ligne


system ("color e1");
 	printf("\n%c",vl);
	 printf("________________________________________%c",vl);
 	SetConsoleTextAttribute(hConsole,11);

	printf("\n%c%s%15c",vl,mot1,vl);
	printf("\n%c%s%2c",vl,mot2,vl);
	printf("\n%c%s%13c\n",vl,mot3,vl);
	printf("%c%s%35c\n",vl,mot4,vl);
	printf("%c %40c\n",vl,vl);
		printf("%c %40c\n",vl,vl);	printf("%c %40c\n",vl,vl);	printf("%c %40c\n",vl,vl);
		 printf("%c________________________________________%c\n",vl,vl);
	printf("%c               %s%2c\n",vl,mot9,vl);
	printf("%c",h);
		for(i=0;i<=mx+14;i++)
	{system ("color e1");
			printf("%c",hl);
	}
		printf("%c",n);
		 SetConsoleTextAttribute(hConsole,15);
		gotoxy(0,20);
	printf("%s",mot7);
	scanf("%d",&choix);


	// gotoxy(0,choix+6);
	// printf("%c",vl);
	  SetConsoleTextAttribute(hConsole,15);
	switch(choix)
	{
	case 1 : printf(" \t%7s ",mot1);
	break;
	case 2 : printf(" \t%5s ",mot2);
	break;
	case 3 : printf(" \t%6s ",mot3);
	break;
	case 4 : printf(" \t%6s ",mot4);
	break;


}
sleep(3);
	  SetConsoleTextAttribute(hConsole,15);
system("cls");
if(choix ==0)

return main();

 return choix;
}
//--------interface-----------------------------

void gotoxy(short a,short b)
{
COORD pos ={a,b};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//*************************
void anim()
{

HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);

 //mot1 GESTION

    //ligne 1



	    printf("%c",l);
		printf("%c%c%c  ",hl,hl,m);
		printf("%c%c%c  ",l,hl,hl);
		printf("%c%c%c  ",l,hl,hl);
		printf("%c%c%c  ",l,d,m);
		printf("%c ",d);
		printf("%c%c%c ",l,hl,m);
		printf("%c%c%c  \n",l,m,d);


	//ligne 2

	     SetConsoleTextAttribute(hConsole,9);

		 printf("%c %c%c",vl,hl,m);
	     printf("  %c%c%c  ",p,hl,hl);
	     printf("%c%c%c   %c",h,hl,m,vl);
	     printf("   %c",vl);
	     printf(" %c %c",vl,vl);

	     printf(" %c%c%c\n",vl,vl,vl);



		//ligne 3

			 SetConsoleTextAttribute(hConsole,14);

		printf("%c",h);
		printf("%c%c%c  ",hl,hl,n);
		printf("%c%c%c  %c%c%c   %c",h,hl,hl,hl,hl,n,f);
		printf("   %c",f);
		printf(" %c%c%c",h,hl,n);
		printf(" %c%c%c",f,h,n);

		printf("\n\n");

		//mot2 dES


		// ligne 1

		SetConsoleTextAttribute(hConsole,9);

		 printf("       %c  ",vl);

		printf(" %c%c%c  ",l,hl,hl);

		printf(" %c%c%c  ",l,hl,m);

		 //ligne 2

		 	 SetConsoleTextAttribute(hConsole,1);

		 printf("\n     %c%c%c  ",l,hl,al);
		   printf(" %c%c%c  ",p,hl,hl);
		    printf(" %c%c%c",h,hl,m);
		 //ligne 3

		 	 SetConsoleTextAttribute(hConsole,14);

		 printf("\n     %c%c%c ",h,hl,n);
		 printf("  %c%c%c  ",h,hl,hl);
		 printf(" %c%c%c",h,hl,n,f);

		 printf("\n\n");


		//mot3 STOCK


        //ligne 1

        SetConsoleTextAttribute(hConsole,9);

        printf("%c%c%c  ",l,hl,hl);
		printf("%c%c%c  ",l,d,m);
        printf("%c%c%c ",l,hl,m);
        printf(" %c%c%c  ",l,hl,hl);
        printf(" %c",vl);
        printf("  K\n");

        //ligne 2

        SetConsoleTextAttribute(hConsole,14);

         printf("%c%c%c   %c",h,hl,m,vl);
	     printf("   %c",vl);
	     printf(" %c",vl);
         printf("  %c  ",vl);
         printf("   %cK\n",p);

        //ligne 3

        SetConsoleTextAttribute(hConsole,1);

		printf("%c%c%c  ",hl,hl,n);
        printf(" %c",f);
		printf("   %c%c%c",h,hl,n);
		printf("  %c%c%c  ",h,hl,hl);
		printf(" %c",vl);
		printf("  K");

}









//---------------fonctions , procedures et structures menu11111111111 -------------------------------------------------------------------------
int menu1()
{
int resp ;
	TypeElem * L;
	int ID;

    typeart Donnee;
	InitList(&L);
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    gotoxy(0,4);
	int choix,i;
	do {
            system("cls");
        char mot0[]="          LA GESTION DES ARTICLES",mot1[]="1-ajouter un article",mot2[]="2-supprimer un article",mot3[]="3-modifier un article",mot4[]="4-chercher un article",mot5[]="5-afficher ",mot6[]="0-retour",mot7[]="donner le choix:";
	SetConsoleTextAttribute(hConsole,11);
	printf("%c",l);
	for(i=0;i<=mx+17;i++)
	{
			printf("%c",hl);
	}
		printf("%c",m);
	//affich menu

	printf("\n%c",vl);

	printf("%s\t",mot0);

	  printf("%5c",vl);

		//1  ligne



 	printf("\n%c",vl);
	 printf("___________________________________________%c",vl);
 	SetConsoleTextAttribute(hConsole,11);

	printf("\n%c%s%24c",vl,mot1,vl);
	printf("\n%c%44c",vl,vl);
	printf("\n%c%s%22c",vl,mot2,vl);
	printf("\n%c%44c",vl,vl);
	printf("\n%c%s%23c",vl,mot3,vl);
	printf("\n%c%44c",vl,vl);

 	printf("\n%c%s%23c\n",vl,mot4,vl);
 	printf("%c%44c",vl,vl);
 	printf("\n%c%s%33c\n",vl,mot5,vl);
 	printf("%c%44c\n",vl,vl);
 	//printf("%c%s%1c\n",vl,mot10,vl);
	//printf("%c%s%8c\n",vl,mot8,vl);
 	//printf("%c%s%21c\n",vl,mot9,vl);
 	printf("%c%s%36c\n",vl,mot6,vl);
 	printf("%c%44c\n",vl,vl);


	printf("%c",h);
		for(i=0;i<=mx+17;i++)
	{
			printf("%c",hl);
	}
		printf("%c",n);
		 SetConsoleTextAttribute(hConsole,15);
		gotoxy(0,21);
	printf("%s",mot7);
	scanf("%d",&choix);


	// gotoxy(0,choix+6);
	 //printf("%c",vl);
	  SetConsoleTextAttribute(hConsole,11);

	  system("cls");
	switch(choix)

	{

	case 1 : printf(" %7s ",mot1);
	system("cls");

   Donnee=GetItem();
    AjoutList(&L,Donnee);
    SetConsoleTextAttribute(hConsole,2);
            printf(" L'operation est terminee avec succes\n");
            sleep(3);
    system("cls");

	break;
	case 2 :

	printf(" %5s ",mot2);

	system("cls") ;
	ID=GetID();
	resp=SupprimeList(&L, ID);

	if(resp==1)

	{SetConsoleTextAttribute(hConsole,14);
		 printf("\n suppression terminee");
	}


	else
    {SetConsoleTextAttribute(hConsole,4);
		printf("\n echec de suppression") ;
	}
    sleep(3);
	system("cls") ;


	break;

	case 3 :

	printf(" %6s ",mot3);
	system("cls") ;
	Donnee=GetItem();				// Saisir la donn?e
					resp=ModifierList(L,Donnee);
						// Modifier la donn?e dans la liste
					if(resp==0){
                       SetConsoleTextAttribute(hConsole,4);
						printf(" L'\x82l\x82ment que vous essayer de modifier n'existe pas !!\n");
					}

					else{
                         SetConsoleTextAttribute(hConsole,2);
						printf(" L'\x82l\x82ment a \x82t\x82 modifi\x82\n");
					}


						sleep(3);
						system("cls") ;
	break;
	case 4 : printf(" %6s ",mot4);
             system("cls") ;
			ID=GetID();
            resp=RechercheList(L,ID);
system("cls");
            if(resp==-1)
                        { SetConsoleTextAttribute(hConsole,4);
                            printf(" L'article n'existe pas \n");
                        }


					else
                    { SetConsoleTextAttribute(hConsole,14);
                        printf(" L'article existe dans la position : %d", resp);
                    }

        sleep(4);
        system("cls");
	break;
	case 5 : printf(" %6s ",mot5);





	/*break;
	case 6 : printf("%7s",mot10);
	break;
	case 7 : printf(" %7s ",mot8);
	break;
	case 8 : printf(" %7s ",mot9);*/
	break;


}
	}while(choix!=0);


system("cls");


return main();

}
void InitList(TypeElem **L)
{
	*L=NULL;			// Mettre le pointeur de t�te de liste � NULL
}

void AjoutList(TypeElem ** L, typeart D)
{
	TypeElem * Ptr;								// D�claration du pointeur qui pointe sur un �l�ment de la liste
	Ptr=(TypeElem *)malloc(sizeof(TypeElem));	// Allocation dynamique d'un �l�ment

	Ptr->Donnee=D;								// Mettre la donn�e D dans le champ "Donne"
	Ptr->Suivant=*L;

	*L=Ptr;

}

int SupprimeList(TypeElem ** L, int ID)
{

	TypeElem * Ptr, *Pred;
	Ptr=*L;
	Pred=NULL;

	while(Ptr!=NULL && Ptr->Donnee.identifiant!=ID)
	{
		Pred=Ptr;
		Ptr=Ptr->Suivant;								// Passer ? l'?l?ment suivant
	}

	if(Ptr!=NULL)										// si l'?l?ment existe
	{
		if(Ptr==*L)										// Si l'?l?ment est la t?te de liste
			*L=Ptr->Suivant;							// La t?te devient l'?l?ment suivant
		else
			Pred->Suivant=Ptr->Suivant;					// sinon le pr?d?cesseur pointe sur le suivant de l'?l?ment

		free(Ptr);										// lib?rer l'espace m?moire

		return 1;
									// retourner 1 si l'?l?ment est supprim?
	}
	else
		return 0;
							// retourner 0 si l'?l?ment n'existe pas ou la liste est vide
}

int ModifierList(TypeElem * L, typeart A)
{

	TypeElem * Ptr;
	Ptr=L;
																	// On utilise l'ID_Etudiant pour chercher l'?l?ment
	while(Ptr!=NULL && Ptr->Donnee.identifiant!=A.identifiant)		// Tant que la liste n'est pas termin?e et on n'a pas trouv? l'?l?ment e
		Ptr=Ptr->Suivant;											// Passer ? l'?l?ment suivant

	if(Ptr!=NULL)
	{
		Ptr->Donnee=A;												// Changer le contenu de la donn?e
		return 1;													// retourner 1 si la modification est r?alis?e
	}
	else

		return 0;													// retourner 0 si l'?l?ment n'exsite pas ou la liste est vide
}

int RechercheList(TypeElem * L, int ID)
{
	TypeElem * Ptr;
	Ptr=L;
	int Pos=0;
	while(Ptr!=NULL && Ptr->Donnee.identifiant!=ID)		// Tant que la liste n'est pas termin?e et on n'a pas trouv? l'?l?ment
	{
		Ptr=Ptr->Suivant;								// Passer ? l'?l?ment suivant
		Pos++;											// Incr?menter la position
	}

	if (Ptr!=NULL)
		return Pos;										// Si l'?l?ment existe on retourne sa position
	else
		return -1;										// si l'?l?ment n'existe pas ou la liste est vide

}

typeart GetItem()
{

	typeart Item;
	printf("\n ID_article : ");
	scanf("%d",&Item.identifiant);
	printf(" \n Designation  : ");
	scanf("%s",&Item.designation);
	printf("  \n Prix_d_achat     : ");
	scanf("%f",&Item.prix_d_achat);
	printf(" \n  Prix_d_vente     : ");
	scanf("%f",&Item.prix_d_vente);
    printf("\n TVA : ");
	scanf("%f",&Item.TVA);
	printf("\n Date de fabrication : ");
	scanf("%s",&Item.date_de_fabrication);
	printf(" \n Date d'expiration'  : ");
	scanf("%s",&Item.date_d_expiration);
	printf(" \n Depot    : ");
	scanf("%s",&Item.depot);
	printf(" \n Qantite  : ");
	scanf("%d",&Item.quantite);
	printf("  \n Seuil de rupture : ");
	scanf("%d",&Item.seuil_de_repture);



	return Item;
}

int GetID()
{
	int Item;
	printf("\n ID_article : ");
	scanf("%d",&Item);

	return Item;
}



//---------------fonctions , procedures et structures menu222222222 -------------------------------------------------------------------------

int menu2()
{
	int resp ;
	TypeElem2 * L2;
	int ID;

    typecf Donnee2;
	InitList2(&L2);
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    gotoxy(0,4);
	int choix,i;
	do {
            system("cls");
        char mot0[]="LA GESTION DES CLIENT FOURNISSEUR",mot1[]="1-ajouter un element",mot2[]="2-supprimer un element",mot3[]="3-modifier un element",mot4[]="4-chercher un element",mot5[]="5-afficher ",mot6[]="0-retour",mot7[]="donner le choix:";
	SetConsoleTextAttribute(hConsole,11);
	printf("%c",l);
	for(i=0;i<=mx+17;i++)
	{
			printf("%c",hl);
	}
		printf("%c",m);
	//affich menu

	printf("\n%c",vl);

	printf("%s\t",mot0);

	  printf("%5c",vl);

		//1  ligne



 	printf("\n%c",vl);
	 printf("___________________________________________%c",vl);
 	SetConsoleTextAttribute(hConsole,11);

	printf("\n%c%s%24c",vl,mot1,vl);
	printf("\n%c%44c",vl,vl);
	printf("\n%c%s%22c",vl,mot2,vl);
	printf("\n%c%44c",vl,vl);
	printf("\n%c%s%23c",vl,mot3,vl);
	printf("\n%c%44c",vl,vl);

 	printf("\n%c%s%23c\n",vl,mot4,vl);
 	printf("%c%44c",vl,vl);
 	printf("\n%c%s%33c\n",vl,mot5,vl);
 	printf("%c%44c\n",vl,vl);
 	//printf("%c%s%1c\n",vl,mot10,vl);
	//printf("%c%s%8c\n",vl,mot8,vl);
 	//printf("%c%s%21c\n",vl,mot9,vl);
 	printf("%c%s%36c\n",vl,mot6,vl);
 	printf("%c%44c\n",vl,vl);


	printf("%c",h);
		for(i=0;i<=mx+17;i++)
	{
			printf("%c",hl);
	}
		printf("%c",n);
		 SetConsoleTextAttribute(hConsole,15);
		gotoxy(0,21);
	printf("%s",mot7);
	scanf("%d",&choix);


	// gotoxy(0,choix+6);
	 //printf("%c",vl);
	  SetConsoleTextAttribute(hConsole,11);

	  system("cls");
	switch(choix)

	{

	case 1 : printf(" %7s ",mot1);
	system("cls");


   Donnee2=GetItem2();
    AjoutList2(&L2,Donnee2);
    SetConsoleTextAttribute(hConsole,10);
            printf(" L'operation est terminee avec succes\n");
            sleep(3);
    system("cls");

	break;
	case 2 :

	printf(" %5s ",mot2);

system("cls") ;
	ID=GetID2();
	resp=SupprimeList2(&L2, ID);

	if(resp==1)

	{SetConsoleTextAttribute(hConsole,14);
		 printf("\n suppression terminee");
	}


	else
    {SetConsoleTextAttribute(hConsole,4);
		printf("\n echec de suppression") ;
	}
    sleep(3);
	system("cls") ;


	break;

	case 3 :

	printf(" %6s ",mot3);

	system("cls") ;
	Donnee2=GetItem2();				// Saisir la donn?e
					resp=ModifierList2(L2,Donnee2);
						// Modifier la donn?e dans la liste
					if(resp==0){
                       SetConsoleTextAttribute(hConsole,4);
						printf(" L'element que vous essayer de modifier n'existe pas !!\n");
					}

					else{
                         SetConsoleTextAttribute(hConsole,2);
						printf(" L'element a ete modifier\n");
					}


						sleep(3);
						system("cls") ;
	break;
	case 4 : printf(" %6s ",mot4);

	system("cls") ;
			ID=GetID2();
            resp=RechercheList2(L2,ID);
system("cls");
            if(resp==-1)
                        { SetConsoleTextAttribute(hConsole,4);
                            printf(" L'element n'existe pas \n");
                        }


					else
                    { SetConsoleTextAttribute(hConsole,14);
                        printf(" L'element existe dans la position : %d", resp);
                    }

        sleep(4);
        system("cls");
	break;
	case 5 : printf(" %6s ",mot5);



	/*break;
	case 6 : printf("%7s",mot10);
	break;
	case 7 : printf(" %7s ",mot8);
	break;
	case 8 : printf(" %7s ",mot9);*/
	break;


}
	}while(choix!=0);


system("cls");


return main();

}
void InitList2(TypeElem2 **L2)
{
	*L2=NULL;			// Mettre le pointeur de t�te de liste � NULL
}

void AjoutList2(TypeElem2 ** L2, typecf D)
{
	TypeElem2 * Ptr;								// D�claration du pointeur qui pointe sur un �l�ment de la liste
	Ptr=(TypeElem2 *)malloc(sizeof(TypeElem2));	// Allocation dynamique d'un �l�ment

	Ptr->Donnee2=D;								// Mettre la donn�e D dans le champ "Donne"
	Ptr->Suivant=*L2;

	*L2=Ptr;
}
int SupprimeList2(TypeElem2 ** L2, int ID)
{
	TypeElem2 * Ptr, *Pred;
	Ptr=*L2;
	Pred=NULL;
														// On utilise l'ID_Etudiant pour chercher l'�l�ment
	while(Ptr!=NULL && Ptr->Donnee2.identifiant!=ID)		// Tant que la liste n'est pas termin�e et on n'a pas trouv� l'�l�ment
	{
		Pred=Ptr;										// Sauvegarder l'adresse du pr�d�cesseur
		Ptr=Ptr->Suivant;								// Passer � l'�l�ment suivant
	}

	if(Ptr!=NULL)										// si l'�l�ment existe
	{
		if(Ptr==*L2)										// Si l'�l�ment est la t�te de liste
			*L2=Ptr->Suivant;							// La t�te devient l'�l�ment suivant
		else
			Pred->Suivant=Ptr->Suivant;					// sinon le pr�d�cesseur pointe sur le suivant de l'�l�ment

		free(Ptr);										// lib�rer l'espace m�moire

		return 1;										// retourner 1 si l'�l�ment est supprim�
	}
	else
		return 0;										// retourner 0 si l'�l�ment n'existe pas ou la liste est vide
}

int RechercheList2(TypeElem2 * L2, int ID)
{
	TypeElem2 * Ptr;
	Ptr=L2;
	int Pos=0;
	while(Ptr!=NULL && Ptr->Donnee2.identifiant!=ID)		// Tant que la liste n'est pas termin?e et on n'a pas trouv? l'?l?ment
	{
		Ptr=Ptr->Suivant;								// Passer ? l'?l?ment suivant
		Pos++;											// Incr?menter la position
	}

	if (Ptr!=NULL)
		return Pos;										// Si l'?l?ment existe on retourne sa position
	else
		return -1;										// si l'?l?ment n'existe pas ou la liste est vide

}
int ModifierList2(TypeElem2 * L2, typecf A)
{

	TypeElem2 * Ptr;
	Ptr=L2;

	while(Ptr!=NULL && Ptr->Donnee2.identifiant!=A.identifiant)		// Tant que la liste n'est pas termin?e et on n'a pas trouv? l'?l?ment e
		Ptr=Ptr->Suivant;											// Passer ? l'?l?ment suivant

	if(Ptr!=NULL)
	{
		Ptr->Donnee2=A;												// Changer le contenu de la donn?e
		return 1;													// retourner 1 si la modification est r?alis?e
	}
	else

		return 0;													// retourner 0 si l'?l?ment n'exsite pas ou la liste est vide
}
typecf GetItem2()
{

	typecf Item;
	printf("\n ID_client/fournisseur : ");
	scanf("%d",&Item.identifiant);
	printf("\n Nom  : ");
	scanf("%s",&Item.nom);
	printf("  \n adresse     : ");
	scanf("%s",&Item.adresse);
	printf("\n  ville    : ");
	scanf("%s",&Item.ville);
    printf("\n telephone : ");
	scanf("%s",&Item.telephone);
	printf("\n type : ");
	scanf("%d",&Item.type);

	return Item;
}

int GetID2()
{
	int Item;
	printf("\n ID _client/fournisseur : ");
	scanf("%d",&Item);

	return Item;
}


//---------------fonctions , procedures et structures menu3 -------------------------------------------------------------------------
int menu3()
{
		int resp ;
	TypeElem3 * L3;
	int ID;

    typeAV Donnee3;
	InitList3(&L3);
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    gotoxy(0,4);
	int choix,i;
	do {
            system("cls");
        char mot0[]="              Achat | Ventes",mot1[]="1-Ajouter une Operation de Ventes / Achats",mot2[]="2-Suppression",mot3[]="3-Modification",mot4[]="4-Recherche",mot5[]="5-afficher ",mot6[]="0-retour",mot7[]="donner le choix:";
	SetConsoleTextAttribute(hConsole,11);
	printf("%c",l);
	for(i=0;i<=mx+17;i++)
	{
			printf("%c",hl);
	}
		printf("%c",m);
	//affich menu

	printf("\n%c",vl);

	printf("%s\t",mot0);

	  printf("%13c",vl);

		//1  ligne



 	printf("\n%c",vl);
	 printf("___________________________________________%c",vl);
 	SetConsoleTextAttribute(hConsole,11);

	printf("\n%c%s%2c",vl,mot1,vl);
	printf("\n%c%44c",vl,vl);
	printf("\n%c%s%31c",vl,mot2,vl);
	printf("\n%c%44c",vl,vl);
	printf("\n%c%s%30c",vl,mot3,vl);
	printf("\n%c%44c",vl,vl);

 	printf("\n%c%s%33c\n",vl,mot4,vl);
 	printf("%c%44c",vl,vl);
 	printf("\n%c%s%33c\n",vl,mot5,vl);
 	printf("%c%44c\n",vl,vl);
 	//printf("%c%s%1c\n",vl,mot10,vl);
	//printf("%c%s%8c\n",vl,mot8,vl);
 	//printf("%c%s%21c\n",vl,mot9,vl);
 	printf("%c%s%36c\n",vl,mot6,vl);
 	printf("%c%44c\n",vl,vl);


	printf("%c",h);
		for(i=0;i<=mx+17;i++)
	{
			printf("%c",hl);
	}
		printf("%c",n);
		 SetConsoleTextAttribute(hConsole,15);
		gotoxy(0,21);
	printf("%s",mot7);
	scanf("%d",&choix);


	// gotoxy(0,choix+6);
	 //printf("%c",vl);
	  SetConsoleTextAttribute(hConsole,11);

	  system("cls");
	switch(choix)

	{

	case 1 : printf(" %7s ",mot1);
	system("cls");


   Donnee3=GetItem3();
    AjoutList3(&L3,Donnee3);
    SetConsoleTextAttribute(hConsole,10);
            printf(" L'operation est terminee avec succes\n");
            sleep(3);
    system("cls");

	break;
	case 2 :

	printf(" %5s ",mot2);

system("cls") ;
	ID=GetID3();
	resp=SupprimeList3(&L3, ID);

	if(resp==1)

	{SetConsoleTextAttribute(hConsole,14);
		 printf("\n suppression terminee");
	}


	else
    {SetConsoleTextAttribute(hConsole,4);
		printf("\n echec de suppression") ;
	}
    sleep(3);
	system("cls") ;


	break;

	case 3 :

	printf(" %6s ",mot3);

	system("cls") ;
	Donnee3=GetItem3();				// Saisir la donn?e
					resp=ModifierList3(L3,Donnee3);
						// Modifier la donn?e dans la liste
					if(resp==0){
                       SetConsoleTextAttribute(hConsole,4);
						printf(" L'element que vous essayer de modifier n'existe pas !!\n");
					}

					else{
                         SetConsoleTextAttribute(hConsole,2);
						printf(" L'element a ete modifier\n");
					}


						sleep(3);
						system("cls") ;
	break;
	case 4 :             system("cls") ;
			ID=GetID3();
            resp=RechercheList3(L3,ID);
system("cls");
            if(resp==-1)
                        { SetConsoleTextAttribute(hConsole,4);
                            printf(" L'article n'existe pas \n");
                        }


					else
                    { SetConsoleTextAttribute(hConsole,14);
                        printf(" L'article existe dans la position : %d", resp);
                    }

        sleep(4);

	break;
	case 5 : printf(" %6s ",mot5);
system("cls");
 afficheliste3(L3);
sleep(6);
 system("cls");
	/*break;
	case 6 : printf("%7s",mot10);
	break;
	case 7 : printf(" %7s ",mot8);
	break;
	case 8 : printf(" %7s ",mot9);*/
	break;


}
	}while(choix!=0);


system("cls");


return main();


}


void AjoutList3(TypeElem3 ** L3, typeAV D)
{

	TypeElem3 * Ptr;
	Ptr=(TypeElem3 *)malloc(sizeof(TypeElem3));

	Ptr->Donnee3=D;
	Ptr->Suivant=*L3;

	*L3=Ptr;
}
typeAV GetItem3()
{
typeAV Item;
int uniq;

    printf("\n ID_operation : ");
	scanf("%d",&Item.identifiant);
	printf("\n ID_Article : ");
	scanf("%d",&Item.ID_Article);
	printf("  \n ID_Client/Fournisseur     : ");
	scanf("%d",&Item.ID_CF);
	printf("\n  Type [0 Achat /1 Vente]    : ");
	scanf("%s",&Item.Type);
    printf("\n Date (jj/mm/aa): ");
	scanf("%s",&Item.Date);
	printf("\n Quantite : ");
	scanf("%d",&Item.Quantite);

	return Item;
}

int ModifierList3(TypeElem3 * L3, typeAV D)
{
	TypeElem3 * Ptr;
	Ptr=L3;

	while(Ptr!=NULL && Ptr->Donnee3.identifiant!=D.identifiant)
		Ptr=Ptr->Suivant;
	if(Ptr!=NULL)
	{
		Ptr->Donnee3=D;
		return 1;
	}
	else

		return 0;
}

void afficheliste3(TypeElem3 *L3)
{
TypeElem3 *ptr;
ptr=L3;

while(ptr != NULL)
{
    printf("\n | ID : %d |",ptr->Donnee3.identifiant);
    printf("\n | ID Article : %d|",ptr->Donnee3.ID_Article);
    printf("\n | ID Client/Fournisseur : %d |",ptr->Donnee3.ID_CF);
    printf("\n | Type : %d |",ptr->Donnee3.Type);
    printf("\n | Date : %s |",ptr->Donnee3.Date);
    printf("\n | Quantite : %d |",ptr->Donnee3.Quantite);
    ptr=ptr->Suivant;

}
}


int SupprimeList3(TypeElem3 ** L3, int ID)
{
	TypeElem3 * Ptr, *Pred;
	Ptr=*L3;
	Pred=NULL;

	while(Ptr!=NULL && Ptr->Donnee3.identifiant!=ID)
	{
		Pred=Ptr;
		Ptr=Ptr->Suivant;
	}

	if(Ptr!=NULL)
	{
		if(Ptr==*L3)
			*L3=Ptr->Suivant;
		else
			Pred->Suivant=Ptr->Suivant;

		free(Ptr);

		return 1;
	}
	else
		return 0;
}
int GetID3()
{
	int Item;
	printf("\n ID_A/V: ");
	scanf("%d",&Item);

	return Item;
}
int RechercheList3(TypeElem3 * L3, int ID)
{
	TypeElem3 * Ptr;
	Ptr=L3;
	int Pos=0;
	while(Ptr!=NULL && Ptr->Donnee3.identifiant!=ID)
	{
		Ptr=Ptr->Suivant;
		Pos++;
	}

	if (Ptr!=NULL)
		return Pos;
	else
		return -1;

}
void InitList3(TypeElem3 **L3)
{
	*L3=NULL;
}


