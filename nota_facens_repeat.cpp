#include <iostream>
#include <string>
using namespace std;

int main() {
    
//cria variavel tipo char
char continuar;

//ele faz oq tiver dentro de do
do{
    //cria variável de texto chamada nome
    string nome;
    //cria 5 variáveis double
    double ra, ac1, ac2, af, ag;
    
    //fala com o user
    cout << "Olá! Digite seu nome e dê ENTER: ";
    //coloca a resposta do user na variável nome
    cin >> nome;
    
    //fala com o user
    cout << "Agora digite seu RA e dê ENTER: ";
    //coloca a resposta do user na variável ra
    cin >> ra;
    
    //fala com o user
    cout << "Digite a nota da sua AC1 e dê ENTER: ";
    //coloca a resposta do user na variável ac1
    cin >> ac1;
    
    //fala com o user
    cout << "Digite a nota da sua AC2 e dê ENTER: ";
    //coloca a resposta do user na variável ac2
    cin >> ac2;
    
    //fala com o user
    cout << "Digite a nota da sua Avaliação Geral e dê ENTER: ";
    //coloca a resposta do user na variável ag
    cin >> ag;
    
    //fala com o user
    cout << "Digite a nota da sua Avaliação Final e dê ENTER: ";
    //coloca a resposta do user na variável af
    cin >> af;
    
    //muda o valor de ac1 para ela msm vezes o valor do seu peso
    ac1 = ac1 * 0.15;
    
    //muda o valor de ac2 para ela msm vezes o valor do seu peso
    ac2 = ac2 * 0.35;
    
    //muda o valor de acf para ela msm vezes o valor do seu peso
    af = af * 0.4;
    
    //muda o valor de acg para ela msm vezes o valor do seu peso
    ag = ag * 0.1;
    
    //cria variavel tipo double chamada soma e ja muda seu valor para a soma das 4 notas
    double soma = (ac1 + ac2 + af + ag);
    
    //fala as notas e resultado para o user
    cout << "AC1 = " << ac1 << "; AC2 = " << ac2 << "; AG = " << ag << "; AF = " << af << ";" << endl << "A sua média no semestre é " << soma << endl;
    
    //casos da variavel soma
    switch((int)soma){
        //caso tire 10
        case 10:
            //fala isso pro user
            cout << "Parabéns, " << nome << ". Você tirou nota máxima :D" << endl;
            //quebra o caso
            break;
        case 9:
        case 8:
        case 7:
        case 6:
        //caso tire 9 8 7 6 ou 5
        case 5:
            //fala isso pro user
            cout << "Parabéns, " << nome << ". Você foi aprovado(a)!" << endl;
            //quebra o caso
            break;
        case 4:
        //caso tire 4 ou 3
        case 3:
            //fala isso pro user
            cout << nome << ", você está de recuperação e terá de fazer uma prova substitutiva." << endl;
            //quebra o caso
            break;
        //caso tire o resto das notas ( 2 1 ou 0)
        default:
            //fala isso pro user
            cout << "Infelizmente, você foi reprovado(a), " << nome << "." << endl;
            //quebra o caso
            break;
    }
    
    //fala com o user
    cout << "Deseja continuar calculando? s/n: ";
    //coloca a resposta do user como valor da variavel continuar
    cin >> continuar;
    
//enquanto a variavel "continuar" continuar sendo "s" ou "S"
}while(continuar=='s' || continuar=='S');
    
    
return 0;
    
}