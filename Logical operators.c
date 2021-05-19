int main()
{
    int a = 5, b = 10,ret;  

    ret = ( (a <= b) || (a != b) );
    printf("return value of above expression is %d\n,ret);
  
    ret = ( (a < b) && (a == b) );
    printf("return value of above expression is %d\n,ret");

    ret = ! ( (a < b) && (a == b) );
    printf("return value of above expression is %d\n,ret");

    return 0;
}
