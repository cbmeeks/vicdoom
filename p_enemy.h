#define TEX_ANIMATE 64

char __fastcall__ P_ApproxDistance( int dx, int dy );

void __fastcall__ p_enemy_resetMap(void);

void __fastcall__ p_enemy_startframe(void);
void __fastcall__ p_enemy_think(void);

char __fastcall__ allocMobj(char o);
void __fastcall__ p_enemy_add_thinker(char o);
void __fastcall__ p_enemy_wasseenthisframe(char o);
void __fastcall__ p_enemy_damage(char o, char damage);
char __fastcall__ p_enemy_get_texture(char o);

char __fastcall__ p_enemy_getKillPercentage(void);
