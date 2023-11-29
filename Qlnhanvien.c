  #include <stdio.h>
  #include <string.h>
  
  
  struct  Employee{
  	int id;
  	char name[30];
  	char position[30];
  	int wage;
  }; 
  void moreEmp(struct Employee emp[], int n){
  	printf ("Ban hay nhap ten nhan vien %d:\n",n);
  	printf ("Ten nhan vien la:\n");
  	getchar();
  	fgets(emp[n-1].name, sizeof emp[n-1].name,stdin);
  	printf ("Ma nhan vien nay la:\n");
  	scanf ("%d",&emp[n-1].id);
  	printf ("Luong cua nhan vien nay la:\n");
  	scanf ("%d",&emp[n-1].wage);
  
  	printf ("Nhap chuc vu cua nhan vien:\n");
  	getchar();
  	fgets(emp[n-1].position,sizeof emp[n-1].position, stdin);
  	
  }
  void outImfor(struct Employee emp[], int n){
  	for (int i=0; i<n;i++){
  		printf ("Ten cua nhan vien la: %s\n",emp[i].name);
  		printf ("Ma cua nhan vien la: %d\n",emp[i].id);
  		printf ("Luong cua nhan vien la: %d\n",emp[i].wage);
  		printf ("Chuc vu cua nhan vien nay la: %s\n",emp[i].position);
  		}
  	
  	} 
  	deletesEmp (struct Employee emp[],int count){
  		printf ("Ban muon xoa nhan vien thu may?\n");
  		int n;
  		scanf ("%d",&n);
  		if (n>0 && n<count){                  
  		 emp[i]=  emp[i+1];
  			
  			}
  		count --;}                                // moi lan xoa thi phai giam so luong nhan vien 
  		else printf ("Khong co nhan vien thu &d\n",n);
  		}
  	// ham sap xep nhan vien theo muc luong   bang cach so sanh va doi cho	
  		void sortingEmp (struct Employee emp[],int  n){
  			printf ("Sap xep nhan vien theo muc luong:\n");
  			
  			for (int i=0 ;i<n-1;i++){
  			for (int j =i+1; j<n;j++){	
  				if (emp[i].wage>emp[j].wage){
  	                struct Employee temp ;
					  temp = emp[i];
					  emp[i]=emp[j];
					  emp[j]=temp;			
  				   }
  			 }
  		}
  			
  			}
  int main (){
  	struct Employee emp[50];   
  	int choice=1;
  	int count = 0;              
  	while (choice != 0){
  	printf ("---------DAY LA CHUONG TRINH QUAN LI NHAN SU-------------\n");
  	printf ("    1. Them nhan vien \n");
  	printf ("    2. Xoa nhan vien \n");
  	printf ("    3. Hien thi nhan vien \n");
  	printf ("    4. Sap xep nhan vien \n");
  	printf ("    0. Thoat chuong trinh \n");
  	scanf ("%d",&choice);
  	switch (choice){
  		case 1:
  			count ++;
  			printf ("Ban chon them nhan vien\n");
  			
  			moreEmp (emp,count);
  			printf ("        Nhap nhan vien thanh cong.\n");
  		break;
  		
  		case 2:
  			printf ("        Ban chon xoa nhan vien \n");
  			if (count != 0) {
  			deletesEmp(emp,count);
  			}else printf ("          Chua co nhan vien nao dc nhap\n");
  		break;
  		
		case 3:
		printf ("            Ban chon hien thi nhan vien \n");
		if (count != 0){ outImfor(emp,count);}
		else printf ("               Chua co nhan vien nao dc nhap\n");
		break;
		
		case 4 :
		printf ("            Ban chon sap xep nhan vien \n");
		if (count != 0){
		sortingEmp (emp, count);
		printf ("            Nhan vien theo thu tu tang dan muc luong la:\n");    
		outImfor( emp,  count);
		}else printf ("               ko co nhan vien \n");
		break;  	
	  }
  }
  return 0;
  }
