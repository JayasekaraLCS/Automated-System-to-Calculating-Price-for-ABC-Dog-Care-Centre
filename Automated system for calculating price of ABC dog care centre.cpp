// JAYASEKARA LCS || BSc(Hons)Management and Information Technology - University of Kelaniya Sri Lanka.
//PRICE CALCULATION SYSTEM FOR ABC DOG CARE CENTRE created in C++ language

#include<iostream>
#include<iomanip>
using namespace std;

// function of total price calculation for one dog
void price_calculation_for_1_dog(int weight, int days){
	int final_valueof_total=0;
	if(weight<=10){
		if(days<=10){
			final_valueof_total= 12*days;
		}
		else{
			final_valueof_total=10*days;	
		}
	}
	else if(weight>10 && weight<=35){
		if(days<=10){
			final_valueof_total=16*days;
		}
		else{
			final_valueof_total=13*days;
		}
	}
	else{
		if(days<=10){
			final_valueof_total=23*days;
		}
		else{
			final_valueof_total=20*days;
		}
		
	}
	
	cout<<setw(100)<<"\n###you have to pay "<<final_valueof_total<<".00 as total value###\n\n";
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//total price calculation for more than a dog
void price_calculation_for_dogs(int array[], int ad_days[], int no_dogs){
		int total_priceA=0;
		int total_pricea=0;
		int total_priceB=0;
		int total_priceb=0;
		int total_priceC=0;
		int total_pricec=0;
		
		
		int final_valueof_total=0;
		
		
		for(int x=0;x<no_dogs;x++){
			if(array[x]<=10){
				if(ad_days[x]<=10){
					total_priceA= total_priceA+ (12*ad_days[x]);
					
				}
				else{
					total_pricea= total_pricea+ (10*ad_days[x]);
					
				}
			}
			else if(array[x]>10 && array[x]<=35){
				if(ad_days[x]<=10){
					total_priceB=total_priceB+(16*ad_days[x]);
						
				}
				else{
					total_priceb=total_priceb+(13*ad_days[x]);
						
				}
			}
			else{
				if(array[x]<=10){
					total_priceC=total_priceC+(23*ad_days[x]);
					
				}
				else{
					total_pricec=total_pricec+(20*ad_days[x]);
					
				}
				
				
			}
		}
		
		final_valueof_total= total_priceA + total_pricea + total_priceB + total_priceb + total_priceC + total_pricec;
		
		cout<<setw(100)<<"\n###you have to pay "<<final_valueof_total<<".00 as total value###\n\n";
		
		
}

int main(void){
	
	cout<<setw(85)<<"PRICE CALCULATION SYSTEM FOR ABC DOG CARE CENTRE\n";
	cout<<setw(87)<<"--------------------------------------------------\n";
	
	

	while(true){
  
    int no_dogs, weight,days;
	int array[no_dogs]; // array[] is get all the weights of dogs that customer has.
    int ad_days[no_dogs];
    char choice;
    cout<<"PRESS Q or q TO EXIT or PRESS ANY KEY TO CONTINUE: ";
    cin>>choice;
    if(choice=='q' || choice=='Q'){
    	return 0;	
	}
	cout<<"\n";
	cout<<"How many dogs do you let us take care of: ";
	cin>>no_dogs;
	cout<<"\n";
	
	
	if(no_dogs>1){
		
		for(int x=0;x<no_dogs;x++){
			cout<<"Enter the weight of your "<<x+1<<" dog: ";
			cin>>array[x];
			cout<<"How many days do you want to take care of your "<<x+1<<" dog: ";
			cin>>ad_days[x];
			cout<<"\n";
		}
		
		price_calculation_for_dogs(array,ad_days,no_dogs);
	}
	else{
		cout<<"Enter the weight of your dog: ";
		cin>>weight;
		cout<<"How many days do you want to take care of your dog: ";
		cin>>days;
		price_calculation_for_1_dog(weight,days);
	}
	
  }
	
}
	
	

