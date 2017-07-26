//
//  main.c
//  hdu1001
//
//  Created by StrphenCool on 2017/7/26.
//  Copyright © 2017年 StrphenCool. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n\n", n/2*(1+n));
    }
    return 0;
}


