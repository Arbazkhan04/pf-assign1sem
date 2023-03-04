
}
bool isDistanceIsGreater(int x1,int x2,int y1,int y2)//calculate  distance 
{
   bool yesOrNo=false;
   //  int x1=2,x2=3,y1=2,y2=3;
    int xDis=(x1-x2);
    int AxSquare=pow(xDis,2);
    int yDis=y1-y2;
    int AySquare=pow(yDis,2);
    int sum=AxSquare+AySquare;
    int sqare=sqrt(sum);
    if(sum<=100)
    {