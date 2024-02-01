#include<stdio.h>
int stud()
{
	int mark[3],sum=0;
	for(int i=0;i<3;i++)
	{
		printf("Enter marks for subject %d:",i+1);
		scanf("%d",&mark[i]);
		sum+=mark[i];
	}
	if(sum>35)
		return 1;
	else
		return 0;
}
void print()
{
	int r,qty,amt,dis,bill_amt,net_bill,gst;
	printf("\nEnter rate:");
	scanf("%d",&r);
	printf("Enter quantity:");
	scanf("%d",&qty);
	amt = r*qty;
	dis = amt*5/100;
	bill_amt=amt-dis;
	gst = bill_amt*18/100;
	net_bill = bill_amt-gst;
	printf("\nRate\tQuantity\tAmount\tDiscount\tBillAmount\tGST\tNetBill\n");
	printf("%d\t%d\t\t%d\t%d\t\t%d\t\t%d\t%d\t",r,qty,amt,dis,bill_amt,gst,net_bill);
}
void main()
{
	/*if(stud())
		printf("Student is pass:");
	else
		printf("Student is fail:");*/
	print();
}