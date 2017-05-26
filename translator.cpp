#include<conio.h>
#include<iostream.h>
#include<math.h>
int main()
{
clrscr();
char *single_digit[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
char *double_digit[]={"Ten","Eleven","Twelve","Thirteen","Forteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"};
char *ten_multiple[]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
char *ten_power[]={" ","Hundred","Thousand","Lakh","Crore"};
long long int number,len=0,temp,maxPower,i=1,rem,z=0;
cout<<" Enter the number ";
cin>>number;
temp=number;
	while(temp!=0)
	{
	temp/=10;
	len++;
	}
do
{
maxPower=pow(10,len-i);

	if(len==1)
	{
	if(number==0)
	{
	cout<<" ";
	len--;
	}
	else
	{
	cout<<" "<<*(&single_digit[number-1]);
	len--;
	}
	}
		else if(len==2)
		{
			if(number>=10&&number<=19)
			{
			cout<<" "<<*(&double_digit[number-10]);
			}
			if(number>=20&&number<=99)
			{
				if(number%10==0)
				{
				  rem=number/maxPower;
				  cout<<" "<<*(&ten_multiple[rem-2]);
				}
				else
				{
				rem=number/maxPower;
				number%=10;
				cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[number-1]);
				}
			}
			len-=2;


		}
		    else if(len==3)
		    {
		    rem=number/maxPower;
		    cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
		    number%=maxPower;
			if(number<=9)
			{
			len-=2;
			}
				else if(number>=10&&number<=99)
				{
				len--;
				}
		    }
			else if(len==4)
			{
			rem=number/maxPower;
			cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
			number%=maxPower;
				if(number<=9)
				{
				len-=3;
				}
					else if(number>=10&&number<=99)
					{
					len-=2;
					}
						else if(number>=100&&number<=999)
						{
						len--;
						}
			}
				else if(len==5)
				{
				rem=number/1000;
					if(rem>=10&&rem<=19)
					{
					cout<<" "<<*(&double_digit[rem-10]);
					}
						else if(rem>=20&&rem<=99)
						{
						if(rem%10==0)
						{
						temp=rem/10;
						cout<<" "<<*(&ten_multiple[temp-2]);
						}
						else
						{
						temp=rem/10;
						rem%=10;
						cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[rem-1]);
						}
						}
				cout<<" "<<*(&ten_power[2]);
				number%=1000;
					if(number<=9)
					{
					len-=4;
					}
						else if(number>=10&number<=99)
						{
						len-=3;
						}
							else if(number>=100&&number<=999)
							{
							len-=2;
							}

				}
					else if(len==6)
					{
					rem=number/maxPower;
					cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[3]);
					number%=maxPower;
						if(number<=9)
						{
						len-=5;
						}
							else if(number>=10&&number<=99)
							{
							 len-=4;
							}
								else if(number>=100&&number<=999)
								{
								len-=3;
								}
									else if(number>=1000&&number<=9999)
									{
									len-=2;
									}
										else if(number>=10000&&number<=99999)
										{
										len-=1;
										}
					}
						else if(len==7)
						{
						rem=number/100000;
							if(rem>=10&&rem<=19)
							{
							cout<<" "<<*(&double_digit[rem-10]);
							}
							else if(rem>=20&&rem<=99)
							{
							if(rem%10==0)
							{
							temp=rem/10;
							cout<<" "<<*(&ten_multiple[temp-2]);
							}
							else
							{
							temp=rem/10;
							rem%=10;
							cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[rem-1]);
							}
							}

						number%100000;
						len=6;
							if(number<=9)
							{
							len-=5;
							}
								else if(number>=10&&number<=99)
								{
								len-=4;
								}
									else if(number>=100&&number<=999)
									{
									len-=3;
									}
										else if(number>=1000&&number<=9999)
										{
										len-=2;
										}
											else if(number>=10000&&number<=99999)
											{
											len-=1;
											}


						}
						else if(len==8)
						{
						rem=number/maxPower;
						cout<<" "<<*(&single_digit[rem-1]);
						cout<<" "<<*(&ten_power[4]);
						number%=maxPower;
							if(number<=9)
							{
							len-=7;
							}
								else if(number>=10&&number<=99)
								{
								len-=6;
								}
									else if(number>=100&&number<=999)
									{
									len-=5;
									}
										else if(number>=1000&&number<=9999)
										{
										len-=4;
										}
											else if(number>=10000&&number<=99999)
											{
											len-=3;
											}
												else if(number>=100000&&number<=999999)
												{
												len-=2;
												}
													else if(number>=1000000&&number<=9999999)
													{
													len-=1;
													}
						}
								else if(len==9)
								{
								rem=number/10000000;

								if(rem>=10&&rem<=19)
								{
								cout<<" "<<*(&double_digit[rem-10]);
								}
									else if(rem>=20&&rem<=99)
									{
									if(rem%10==0)
									{
									temp=rem/10;
									cout<<" "<<*(&ten_multiple[temp-2]);
									}
									else
									{
									temp=rem/10;
									rem%=10;
									cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[rem-1]);
									}
									}
							cout<<" "<<*(&ten_power[4]);
							number%=10000000;
							len=8;
								if(number<=9)
								{
								len-=7;
								}
								else if(number>=10&&number<=99)
								{
								len-=6;
								}
									else if(number>=100&&number<=999)
									{
									len-=5;
									}
										else if(number>=1000&&number<=9999)
										{
										len-=4;
										}
											else if(number>=10000&&number<=99999)
											{
											len-=3;
											}
												else if(number>=100000&&number<=999999)
												{
												len-=2;
												}
													else if(number>=1000000&&number<=9999999)
													{
													len-=1;
													}
							}


}while(len!=0);
getch();
return 0;
}
