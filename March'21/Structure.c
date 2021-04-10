#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
    float weight;
    float height;
};

void printAllStudents(struct student students[])
{
    printf("All Students Information:\n");
    for(int i=0;i<5;i++){
        printf("%s %d %f %f\n",students[i].name, students[i].age, students[i].weight, students[i].height);
    }
}

void findMaxStudent(struct student students[])
{
    int mx = 0;
    for(int i=0;i<5;i++){
        if(mx < students[i].age){
            mx = students[i].age;
        }
    }

    printf("\n\nMaximum Age Student:\n");
    for(int i=0;i<5;i++){
        if(mx == students[i].age){
            printf("%s %d %f %f\n",students[i].name, students[i].age, students[i].weight, students[i].height);
        }
    }
}

void changeName(struct student students[], char newName[], int index)
{
    printf("\n\nPrint the change name:\n");
    printf("%s %d %f %f\n",newName, students[index].age, students[index].weight, students[index].height);
}

int main()
{
    struct student students[5] = {{"Jamil", 33, 66.5, 5.8}, {"Habil",
    12, 30.7, 5.1},
    {"Kabir", 45, 79.1, 6.1},
    {"Nafis", 27, 71, 5.11},
    {"Arif", 22, 62, 5.8}};

    printAllStudents(students);
    findMaxStudent(students);
    changeName(students, "Aman", 1);

    return 0;
}
