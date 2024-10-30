#ifndef GPU_H
#define GPU_H



typedef unsigned short u_short ;
void gpu_open();
void gpu_close();

void wbm(u_short bgr, u_short address);
void wbr_bg(u_short bgr);
void wbr_sp(u_short act, unsigned int posX_Y, u_short offset, u_short reg);
void wsm(u_short spr_address, u_short bgr);
void dp_triangle(u_short bgr, u_short size, unsigned int refPosY_X, u_short reg);
void dp_square(u_short bgr, u_short size, unsigned int refPosY_X, u_short reg);
void set_hex(u_short d5_d4, int d3_d2_d1_d0);
int read_keys();

// utility functions

#endif // !GPU_H