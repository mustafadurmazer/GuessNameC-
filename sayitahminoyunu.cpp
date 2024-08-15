#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main(){
    cout<<"SAYI TAHMİN OYUNUNA HOŞGELDİNİZ!"<<endl<<endl;
    string zorluk;
    cout<<"Lütfen zorluk seviyesini seçiniz:\nZ: Zor\nK: Kolay"<<endl;
    srand(time(0));
    while(1){
        cin >> zorluk;
        if (zorluk == "K" || zorluk == "k" || zorluk == "Z" || zorluk == "z"){
            break;
        }
        else
            cout<<"\nYanlış Tuşlama Yaptınız.Lütfen doğru tuşlama yapınız!";
            
    }
    int denemesayisi;
    if (zorluk == "k" || zorluk == "K"){
        denemesayisi = 10;
    }
    else
        denemesayisi = 5;

    int sayi = rand()%1000;
    int inputNumber;

    while(1){
        if(denemesayisi == 1){
            cout<<"Deneme hakkınız bitti.GAME OVER"<<endl; 
            cout<<"Sayi: "<<sayi;
            break;
        }
        else{
            cout<<"0 ile 1000 arasında sayi giriniz"<<endl;

            while(1){
            cin>>inputNumber;
            if(denemesayisi == 0){
                    cout<<"Deneme hakkınız kalmadı.Oyun bitti!";
                    break;
                }
            else if(inputNumber>1000 || inputNumber<0){
                cout<<"Yanlış Tuşlama Yaptınız! Tekrar deneyin."<<endl<<endl;
                continue;
            }
            else{
                if(inputNumber == sayi){
                    cout<<"Tebrikler! Sayı doğru"<<endl;
                    cout<<"Sayi: "<<sayi<<endl;
                    break;
                    }
                else if(inputNumber>sayi){
                    cout<<"Daha küçük sayı girin";
                    denemesayisi--;
                    cout<<"\nDeneme hakkınız: "<<denemesayisi+1<<endl<<endl;
                    continue;
            }
                else if(inputNumber<sayi){
                    cout<<"Daha büyük sayı girin";
                    denemesayisi--;
                    cout<<"\nDeneme hakkınız: "<<denemesayisi+1<<endl<<endl;
                    continue;
            }
            }
            }
            break;
            }

        }

    









    return 0;
}