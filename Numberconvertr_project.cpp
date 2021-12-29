#include<iostream>
using namespace std;
void convert(int val)
{
  
    char *first_array[20] = {"ZERO", "ONE", "TWO", "THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN",
    "ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN"};
  
    char *second_array[10] = {"", "TEN", "TWENTY", "THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};
    if(val<0)
    {
    	cout<<"obaid";exit;
        cout<<" ";
        convert(-val);
    }
    else if(val>=100000)
    {
      convert(val/100000);
        cout<<" Lakh";
        if(val % 100000)
        {
            if(val % 100000 < 100)
            {
                cout << " AND";
            }
            cout << " " ;
            convert(val % 100000);
        }	
	}
    else if(val>=1000)
    {
        convert(val/1000);
        cout<<" THOUSAND";
        if(val % 1000)
        {
            if(val % 1000 < 100)
            {
                cout << " AND";
            }
            cout << " " ;
            convert(val % 1000);
        }
    }
    else if(val >= 100)
    {
        convert(val / 100);
        cout<<" HUNDRED";
        if(val % 100)
        {
            cout << " AND ";
            convert (val % 100);
        }
    }
    else if(val >= 20)
    {
        cout << second_array[val / 10];
        if(val % 10)
        {
            cout << " ";
            convert(val % 10);
        }
    }
    else
    {
        cout<<first_array[val];
    }
    return;
    
}
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    convert(number);
    return 0;
}
