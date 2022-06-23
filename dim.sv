module top;
    int a[5][2];
    function dd();
        int a[7][8];
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 2; j++) {
                printf("a[%d][%d] = %d\n", i,j, a[i][j] );
            }
        }
    endfunction
    assign a[1][4] = 7;
endmodule