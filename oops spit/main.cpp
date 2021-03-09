#include <iostream>

using namespace std;


int getCowsPlusBulls(int ans, int guess) {

    int count = 0;
    while (ans > 0) {
        if (ans % 10 == guess % 10)
            count += 1;
        ans /= 10;
        guess /= 10;
    }
    return 4 - count;
}


int main() {


    FILE *fptr1;
    fptr1 = fopen("random.csv", "r");
    char ch[10000];
    fgets(ch, 10000, fptr1);
    fclose(fptr1);

    int num, t = 0;

    fptr1 = fopen("steps.txt", "w");
    while (ch[t]) {
        num = 0;
        while (ch[t] != ',') {
            num *= 10;
            num += ((int) ch[t]) - 48;
            t++;
        }


        int animals, nums[4], c = 0, steps = 0, flag = 0;

        for (int i = 0000; i <= 9999; i += 1111) {
            steps++;
            animals = getCowsPlusBulls(num, i);
            if (animals < 4) {

                if (animals == 3)
                    nums[c] = i % 10;

                else if (animals == 2) {
                    nums[c] = i % 10;
                    nums[c + 1] = i % 10;
                    c++;

                } else if (animals == 1) {
                    nums[c] = i % 10;
                    nums[c + 1] = i % 10;
                    nums[c + 2] = i % 10;
                    c += 2;
                } else {
                    nums[c] = i % 10;
                    nums[c + 1] = i % 10;
                    nums[c + 2] = i % 10;
                    nums[c + 3] = i % 10;
                    fprintf(fptr1, "Num: %d\t Steps: %d\n", num, steps);
                    flag = 1;
                    break;
                }
                c++;
                if (c == 4)
                    break;
            }
        }
        if (flag) {
            t++;
            continue;
        }
        for (int n : nums) {
            cout << n;
        }
        cout << endl;
        int temp;
        flag = 0;

        for (int i = 0; i < 4; i++) {
            if (flag == 1)
                break;

            for (int j = 0; j < 4; j++) {
                if (flag == 1)
                    break;
                for (int k = 0; k < 4; k++) {
                    if (flag == 1)
                        break;
                    for (int l = 0; l < 4; l++) {
                        if (flag == 1)
                            break;
                        if (nums[i] != 0 and i != j and j != k and k != l and l != i and i != k and j != l) {
                            steps++;
                            temp = nums[i] * 1000 + nums[j] * 100 + nums[k] * 10 + nums[l];
                            if (getCowsPlusBulls(num, temp) == 0) {
                                cout << "The number is " << temp << endl;
                                cout << "Steps: " << steps << endl;

                                fprintf(fptr1, "Num: %d\t Steps: %d\n", num, steps);
                                flag = 1;

                            }
                        }

                    }
                }
            }
        }
        t++;

    }

    fclose(fptr1);

    return 0;
}
