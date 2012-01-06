// this is just for trial
#include <cstdlib>

int main()
{
    return 0;
}

/*inline unsigned long get()
{
    res=0;
    do{c=getchar_unlocked();}while(c<'0'||c>'9');
    while(c>='0'&&c<='9')
    {
        res=(res<<3)+(res<<1)+(c-'0');
        c=getchar_unlocked();
    }
    return res;
}
inline unsigned long get()
{
    res=0;
    do{
        if(buffi>=bc)
        {
            bc=fread(buff,1,SIZE,stdin);
            buffi=0;
        }
        c=buff[buffi++];}while((c<'0'||c>'9') );
    while(c>='0'&&c<='9' )
    {
        res=(res<<3)+(res<<1)+(c-'0');
        c=buff[buffi++];
        if(buffi>=bc)
        {
            bc=fread(buff,1,SIZE,stdin);
            buffi=0;
        }
    }
    return res;
}
 * inline void put(unsigned long tmpno,char c)
{
    if(buffwi+15>=SIZE)
    {
        fwrite(buffw,1,buffwi,stdout);
        buffw[0]='\0';
        buffwi=0;
    }
    sprintf(tmp,"%lu%c",tmpno,c);
    strcat(buffw,tmp);
    buffwi+=strlen(tmp);
}
 */