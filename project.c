#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Question
{
    char question[200];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char answer;
};

void displayInstructions()
{
    printf("\n========== INSTRUCTIONS ==========\n");
    printf("1. Each question has four options.\n");
    printf("2. Enter A, B, C or D as your answer.\n");
    printf("3. Each correct answer gives 1 mark.\n");
    printf("4. There is no negative marking.\n");
    printf("5. Your final score and performance will be displayed.\n");
    printf("==================================\n");
}

void displayQuestion(struct Question q, int number)
{
    printf("\n----------------------------------------\n");
    printf("Question %d\n", number);
    printf("----------------------------------------\n");
    printf("%s\n\n", q.question);
    printf("A. %s\n", q.optionA);
    printf("B. %s\n", q.optionB);
    printf("C. %s\n", q.optionC);
    printf("D. %s\n", q.optionD);
}

void displayResult(int total, int correct, int wrong)
{
    float percentage;

    percentage = ((float)correct / total) * 100;

    printf("\n========================================\n");
    printf("              QUIZ RESULT\n");
    printf("========================================\n");
    printf("Total Questions : %d\n", total);
    printf("Correct Answers : %d\n", correct);
    printf("Wrong Answers   : %d\n", wrong);
    printf("Score           : %d/%d\n", correct, total);
    printf("Percentage      : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Performance      : Excellent\n");
    else if (percentage >= 75)
        printf("Performance      : Very Good\n");
    else if (percentage >= 50)
        printf("Performance      : Good\n");
    else
        printf("Performance      : Needs Improvement\n");

    printf("========================================\n");
}

void startQuiz(struct Question questions[], int total, char category[])
{
    int correct = 0;
    int wrong = 0;
    char userAnswer;

    printf("\n========================================\n");
    printf("          %s QUIZ\n", category);
    printf("========================================\n");

    for (int i = 0; i < total; i++)
    {
        displayQuestion(questions[i], i + 1);

        printf("\nEnter your answer: ");
        scanf(" %c", &userAnswer);

        if (userAnswer >= 'a' && userAnswer <= 'd')
            userAnswer = userAnswer - 32;

        if (userAnswer == questions[i].answer)
        {
            printf("Correct Answer!\n");
            correct++;
        }
        else
        {
            printf("Wrong Answer!\n");
            printf("Correct Answer: %c\n", questions[i].answer);
            wrong++;
        }
    }

    displayResult(total, correct, wrong);
}

void cProgrammingQuiz()
{
    struct Question questions[] =
    {
        {
            "Which language is known as a middle-level programming language?",
            "C",
            "HTML",
            "SQL",
            "CSS",
            'A'
        },
        {
            "Which symbol is used to get the address of a variable in C?",
            "*",
            "&",
            "#",
            "@",
            'B'
        },
        {
            "Which data type is used to store a single character?",
            "int",
            "float",
            "char",
            "double",
            'C'
        },
        {
            "Which loop is guaranteed to execute at least once?",
            "for",
            "while",
            "do-while",
            "nested loop",
            'C'
        },
        {
            "Which function is used to display output in C?",
            "scanf()",
            "printf()",
            "display()",
            "output()",
            'B'
        },
        {
            "Which header file is required for printf() and scanf()?",
            "stdlib.h",
            "string.h",
            "stdio.h",
            "math.h",
            'C'
        },
        {
            "Which operator is used for multiplication in C?",
            "x",
            "*",
            "%",
            "#",
            'B'
        },
        {
            "Which keyword is used to return a value from a function?",
            "break",
            "return",
            "continue",
            "exit",
            'B'
        },
        {
            "Which of the following is used to store multiple values of the same type?",
            "Array",
            "Function",
            "Operator",
            "Pointer",
            'A'
        },
        {
            "Which symbol is used to terminate a statement in C?",
            ".",
            ":",
            ";",
            ",",
            'C'
        }
    };

    startQuiz(questions, 10, "C Programming");
}

void dataStructuresQuiz()
{
    struct Question questions[] =
    {
        {
            "Which data structure follows LIFO?",
            "Queue",
            "Stack",
            "Array",
            "Tree",
            'B'
        },
        {
            "Which data structure follows FIFO?",
            "Stack",
            "Queue",
            "Tree",
            "Graph",
            'B'
        },
        {
            "Which operation adds an element to a stack?",
            "Pop",
            "Push",
            "Delete",
            "Peek",
            'B'
        },
        {
            "Which operation removes an element from a stack?",
            "Push",
            "Insert",
            "Pop",
            "Search",
            'C'
        },
        {
            "Which data structure consists of nodes connected by links?",
            "Array",
            "Linked List",
            "Stack",
            "Queue",
            'B'
        },
        {
            "Which data structure is commonly used for BFS?",
            "Stack",
            "Queue",
            "Array",
            "Tree",
            'B'
        },
        {
            "Which data structure is commonly used for DFS?",
            "Queue",
            "Stack",
            "Heap",
            "Array",
            'B'
        },
        {
            "Which structure has a root node and child nodes?",
            "Stack",
            "Queue",
            "Tree",
            "Array",
            'C'
        },
        {
            "Which data structure stores elements in contiguous memory locations?",
            "Linked List",
            "Array",
            "Tree",
            "Graph",
            'B'
        },
        {
            "Which data structure is useful for implementing recursion?",
            "Queue",
            "Stack",
            "Graph",
            "Heap",
            'B'
        }
    };

    startQuiz(questions, 10, "Data Structures");
}

void pythonQuiz()
{
    struct Question questions[] =
    {
        {
            "Which symbol is used for comments in Python?",
            "//",
            "#",
            "/*",
            "--",
            'B'
        },
        {
            "Which keyword is used to define a function in Python?",
            "function",
            "define",
            "def",
            "fun",
            'C'
        },
        {
            "Which data type stores key-value pairs in Python?",
            "List",
            "Tuple",
            "Dictionary",
            "Set",
            'C'
        },
        {
            "Which symbol is used to create a list in Python?",
            "()",
            "[]",
            "{}",
            "<>",
            'B'
        },
        {
            "Which function is used to display output in Python?",
            "display()",
            "printf()",
            "print()",
            "show()",
            'C'
        },
        {
            "Which keyword is used for a loop over a sequence?",
            "repeat",
            "for",
            "loop",
            "iterate",
            'B'
        },
        {
            "Which operator is used for exponentiation in Python?",
            "^",
            "**",
            "//",
            "%%",
            'B'
        },
        {
            "Which function returns the length of a list?",
            "count()",
            "length()",
            "len()",
            "size()",
            'C'
        },
        {
            "Which data type is immutable?",
            "List",
            "Dictionary",
            "Tuple",
            "Set",
            'C'
        },
        {
            "Which keyword is used to handle exceptions?",
            "error",
            "catch",
            "try",
            "exception",
            'C'
        }
    };

    startQuiz(questions, 10, "Python");
}

int main()
{
    int choice;

    srand(time(NULL));

    while (1)
    {
        printf("\n\n========================================\n");
        printf("            QUIZ APPLICATION\n");
        printf("========================================\n");
        printf("1. C Programming Quiz\n");
        printf("2. Data Structures Quiz\n");
        printf("3. Python Quiz\n");
        printf("4. Instructions\n");
        printf("5. Exit\n");
        printf("========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                cProgrammingQuiz();
                break;

            case 2:
                dataStructuresQuiz();
                break;

            case 3:
                pythonQuiz();
                break;

            case 4:
                displayInstructions();
                break;

            case 5:
                printf("\nThank you for playing!\n");
                exit(0);

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}