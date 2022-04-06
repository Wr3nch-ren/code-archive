#include <stdio.h>

struct complex {
  
    float x;
    float y;

};

struct complex add_complex(struct complex c,struct complex d)
{
    struct complex answer;
    answer.x = c.x + d.x;
    answer.y = c.y + d.y;
    return answer;

}

struct complex multiply_complex(struct complex c,struct complex d)
{
    struct complex answer;
    answer.x = c.x * d.x - c.y * d.y;
    answer.y = c.x * d.y + c.y * d.x;
    return answer;

}

void print_complex(char* prompts, struct complex answer)
{
    printf("%s", prompts);
    if (answer.x == 0 && answer.y == 0){
        printf("%.1lf\n", 0);
    }
    else{
    if (answer.x != 0){
        printf("%.1f ", answer.x);
        if (answer.y > 0){
            printf("+ %.1fi\n", answer.y);
        }
        else if(answer.y < 0){
            printf("- %.1fi\n", answer.y * (-1));
        }
    }    
    else{
        printf("%.1fi\n",answer.y);
    }
    }

}

int main()
{
  
    struct complex C, D, E, F;


  printf("Enter C: ");
  scanf("%f %f", &C.x, &C.y);
  
    printf("Enter D: ");
    scanf("%f %f", &D.x, &D.y);


  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}