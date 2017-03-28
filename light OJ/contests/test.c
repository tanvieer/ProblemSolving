#include<stdio.h>
#include<math.h>

int MultiplyNumbers(long place1, long place2, long place3)
{
long i,i2,i3,j,addr1,addr2,add1,add2,add3,som;

add1 = place1 * NrDigits;
add2 = place2 * NrDigits;
add3 = place3 * NrDigits;
sign[place3] = sign[place1]*sign[place2];
i=0; while((NrMem[add1+NrDigits-1-i]==0) && (i<NrDigits)) i++;
trailingzeros1 = i;
i=0; while((NrMem[add2+NrDigits-1-i]==0) && (i<NrDigits)) i++;
trailingzeros2 = i;
if ((trailingzeros1==NrDigits) || (trailingzeros2==NrDigits)) { PutZero(place3); return(1); }
if (trailingzeros1 > NrDigits-3) trailingzeros1 = NrDigits-3;
if (trailingzeros2 > NrDigits-3) trailingzeros2 = NrDigits-3;
carry = 0;
for(i=0;i<NrDigits;i++) { LongNrMem1[i] = (long) NrMem[add1+i]; LongNrMem2[i] = (long) NrMem[add2+i]; }
for(i=NrDigits-9;i<NrDigits;i++)
{
som = carry;
i2 = trailingzeros1;
i3 = i-trailingzeros2;
addr1 = NrDigits-1-i2;
addr2 = NrDigits-i-1+i2;
for(j=i2;j<=i3;j++)
{
fac = LongNrMem1[addr1] * LongNrMem2[addr2];
addr1--; addr2++;
som += fac;
}
carry = som/100;
}
mantissa3[NrDigits-1] = som % 100;
for(i=NrDigits-2;i>=0;i--)
{
som = carry;
i2 = Max(i-NrDigits+1+trailingzeros2,0);
i3 = Min(NrDigits-1-trailingzeros1,i);
addr1 = i2;
addr2 = i-i2;
for(j=i2;j<=i3;j++)
{
fac = LongNrMem1[addr1] * LongNrMem2[addr2];
addr1++; addr2--;
som += fac;
}
mantissa3[i] = som%100;
carry = som/100;
}
AdjustExponent(place3,exponent[place1] + exponent[place2]);
if (carry>0) { NrMem[add3] = carry; for(i=1;i<NrDigits;i++) NrMem[add3+i] = mantissa3[i-1]; AdjustExponent(place3,exponent[place3]+1... }
else { for(i=0;i<NrDigits;i++) NrMem[add3+i] = mantissa3[i]; }
return(1);
}

int AdjustExponent(long place, long value)
{
if (value<-1000000000) MsgUnderflow();
else if (value> 1000000000) MsgOverflow();
else exponent[place] = value;
}

long Min(long l1, long l2)
{
if (l1<l2) return(l1); else return(l2);
}

long Max(long l1, long l2)
{
if (l1>l2) return(l1); else return(l2);
}

int PutZero(long place1)
{
long i,add1;

add1 = place1 * NrDigits;
for(i=0;i<NrDigits;i++) { NrMem[add1] = 0; add1++; }
sign[place1] = 1;
exponent[place1] = 0;
}

