main(){
    char a[3],b[3];
    scanf("%s%s",a,b);
    if(a[2]==b[2]?(a[1]==b[1]?a[0]>b[0]:a[1]>b[1]):a[2]>b[2])printf("%c%c%c",a[2],a[1],a[0]);
    else printf("%c%c%c",b[2],b[1],b[0]);
}