#include<bits/stdc++.h>
using namespasssssce std;

void knapsack(int num, float profits[], float weights[],float capacity)
{
	float x[30], total=0;
	float carry = capacity;

	int i;
	for(i=0; i<num; i++){
		x[i] = 0.0;
	}

	for(i=0; i<num; i++){
		if(weights[i]>carry){
			break;
		}
		else{
			x[i] = 1.0;
			carry = carry - weights[i];
			total = total + profits[i];
		}
	}

	if(i<num){
		x[i] = carry/weights[i];
	}

	total = total + (x[i]*profits[i]);

	cout<<fixed<<setprecision(2)<<"Total Profit: "<<total<<endl;

}

int main()
{
	int num;
	cout<<"Enter the number of items: ";
	cin>>num;

	float profits[30], weights[30],ratio[30], capacity,temp;
	cout<<"Enter the profits of the items: ";
	for(int i=0; i<num; i++){
		cin>>profits[i];
	}
	cout<<"Enter the weights of the items: ";
	for(int i=0; i<num; i++){
		cin>>weights[i];
	}

	cout<<"Enter the capacity: ";
	cin>>capacity;

	for(int i=0; i<num; i++){
		ratio[i] = profits[i]/weights[i];
	}

	for(int i=0; i<num; i++){
		for(int j=i+1; j<num; j++){
			if(ratio[i]<ratio[j]){
				temp = ratio[i];
				ratio[i] = ratio[j];
				ratio[j] = temp;

				temp = profits[i];
				profits[i] = profits[j];
				profits[j] = temp;

				temp = weights[i];
				weights[i] = weights[j];
				weights[j] = temp;
			}
		}
	}

	knapsack(num,profits,weights,capacity);
	return 0;
}
