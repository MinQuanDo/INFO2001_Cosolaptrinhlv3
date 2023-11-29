 #include <stdio.h>
 #include <string.h>
 
 
struct Student {
 char name[50];
 int id;
 int age;
 float grade;
};
void initsutudent (struct Student s[], int size){
 	 for (int i=0;i<size;i++){
    getchar();
    printf("Nhap thong tin sinh vien thu %d:\n",i+1);
    printf("Nhap ten: ");
    fgets(s[i].name, sizeof(s[i].name), stdin);
    printf("Nhap ma so: ");
    scanf("%d", &s[i].id);
    printf("Nhap tuoi: ");
    scanf("%d", &s[i].age);
    printf("Nhap diem: ");
    scanf("%f", &s[i].grade);
     getchar();
}
 	
 	}
 void updateSutudent (struct Student s[] ,int count){
 	getchar();
    printf("Nhap thong tin sinh vien thu %d:\n",count+1);
    printf("Nhap ten: ");
    fgets(s[count+1].name, sizeof(s[count+1].name), stdin);
    printf("Nhap ma so: ");
    scanf("%d", &s[count+1].id);
    printf("Nhap tuoi: ");
    scanf("%d", &s[count+1].age);
    printf("Nhap diem: ");
    scanf("%f", &s[count+1].grade);
     getchar();
}
 	void editStudent(struct Student s[], int n){
 		printf ("Ban muon sua thong tin cua sinh vien thu may:\n");
 		int a;
 		scanf("%d",&a);
 		getchar();
         printf("Nhap lai thong tin sinh vien thu %d:\n",a);
         printf("Nhap ten: ");
         fgets(s[a-1].name, sizeof(s[a-1].name), stdin);
         printf("Nhap ma so: ");
         scanf("%d", &s[a-1].id);
         printf("Nhap tuoi: ");
         scanf("%d", &s[a-1].age);
         printf("Nhap diem: ");
         scanf("%f", &s[a-1].grade);
         getchar();
 		}
 	void searchStudent(struct Student s[] ,int n ){
 		printf ("Id sinh vien ban can tim la gi:");
	    int idStu;
	    scanf("%d",&idStu);
	    for (int i = 0; i<n ; i++){
 		if (s[i].id == idStu){
            printf (Ten cua sinh vien la: %s\n",s[i].name );
			printf ("Tuoi cua sinh vien la: %d\n",s[i].age );
			printf ("Diem cua sinh vien la: %.2f\n",s[i].grade );		
 		
 		      }
 		}
}
     void arrange(struct Student s[], int n){
     	
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {           
            if (s[j].grade > s[i].grade) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
     	
	 
int main() {
 struct Student s[50];
 int choice=1;
 int count = 0; // danh sach ban dau 
 while(choice != 0){
 	
 printf ("\n-------MENU-------\n");
 printf ("   Day la chuong trinh quan li sinh vien \n");
 printf (" Chon 1: khoi tao danh sanh \n ");
 printf (" Chon 2: them moi sinh vien \n");
 printf (" Chon 3: sua thong tin sinh vien \n");
 printf (" Chon 4: sap xep danh sach\n");
 printf (" Chon5 :tim kiem thong tin sinh vien \n");
 printf (" Chon 0 : thoat\n");
 scanf ("%d", &choice);


 switch(choice){
 	 case 1:
 	 	printf("Khoi tao danh sach\n");
 	 	printf ("Ban hay nhap thong tin\n");
 	 	printf ("Ban muon nhap bao nhieu sinh vien :\n");
 	 
 	 	scanf("%d",&count);                                 
 	 	initsutudent(s, count);
 	 	break;
     	 
 	 case 2:
 	 	if (count<50){
	  printf ("them moi sinh vien\n ");
	  updateSutudent(s,count);
	  count ++;                                           
	   }else printf ("danh sach day !");
	  break;
	  case 3:
	  	if (count != 0  ){
	  		printf ("Sua thong tin sinh vien\n");
	  		editStudent (s,count);
	  		}else printf ("Danh sach sinh vien trong!");
	  
	  break;
	  case 4:
	  if (count != 0){
	  arrange(s,count );
	    printf("Sap xep danh sach theo diem\n");
    printf("Danh sach sinh vien sau khi sap xep:\n");
    for (int i = 0; i < count; i++) {
        printf("Ten: %s", s[i].name);
        printf("Ma so: %d\n", s[i].id);
        printf("Tuoi: %d\n", s[i].age);
        printf("Diem: %.2f\n", s[i].grade);
    }
    } else printf ("Danh sach sinh vien trong\n");
    break;
      break;
	  case 5:
	  	if (count !=0){
	  	printf ("Tim kiem thong tin sinh vien\n ");	
	  	
	  	searchStudent(s,count);}
	  	else printf ("Danh sach sinh vien trong!");
	 
	  break;

}
}

    return 0;
}
