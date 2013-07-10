#include <SDL.h>
SDL_Surface*e;SDL_Rect f,k={0,0,7,7};int p(int x,int y){return*((int*)e->pixels
+x+y*480)==874069;}void g(){f.x=f.y=1,f.w=f.h=7;SDL_FillRect(e,0,5824849);for(;
f.x<480;f.x+=8){for(;f.y<480;f.y+=8)SDL_FillRect(e,&f,874069);f.y=1;}f.x=(rand(
)%60)*8+1;srand(time(0));f.y=(rand()%60)*8+1;int h=0;int i=rand()%2399;while(h<
2400){switch(rand()%4){case 0:if(f.y>9){f.y-=8;break;}continue;case 1:if(f.x<4\
65){f.x+=8;break;}continue;case 2:if(f.y<465){f.y+=8;break;}continue;case 3:if(
f.x>9)f.x-=8;else continue;}if(h==i)k.x=f.x,k.y=f.y;SDL_FillRect(e,&f,5824849);
++h;}SDL_FillRect(e,&k,255);}int main(int a,char**b){SDL_Event d;char z[99]="L"
"abyrinth ";SDL_Init(32);SDL_Surface*c=SDL_SetVideoMode(480,480,32,0);e=SDL_Cr\
eateRGBSurface(0,480,480,32,0,0,0,0);int t=SDL_GetTicks();g();while(1){if(SDL_\
PollEvent(&d)){if(d.type==12)break;else{int x=d.button.x;int y=d.button.y;if(d.
button.button==1&&x<f.x+13&&x>f.x-5&&y<f.y+13&&y>f.y-5){x=((x>>3)<<3)+1;y=((y>>
3)<<3)+1;if(!p(x+2,y+2)){f.x=x;f.y=y;if(f.x==k.x&&f.y==k.y){t=SDL_GetTicks();g(
);}}}}}SDL_BlitSurface(e,0,c,0);SDL_FillRect(c,&f,0);int u=SDL_GetTicks()-t;sp\
rintf(z+10,"%d",20-u/1000);SDL_WM_SetCaption(z,z);if(u>20000)break;SDL_Flip(c);
SDL_Delay(20);}SDL_FreeSurface(e);SDL_Quit();return 0;}

/* Unite the black square with the blue square before the time runs out. */
