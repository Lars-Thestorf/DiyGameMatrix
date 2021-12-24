#include "tetris_draw.h"

#include <cstdio>

void drawFuncField1p1(uint8_t x, uint8_t y, uint16_t color, HLM_graphics* gfx) {
	gfx->drawRect(x*2, y*2, 2, 2, color);
}
void drawFuncHUD1p1(class tetris_game *gameplay, HLM_graphics* gfx) {
	switch(gameplay->game_state) {
		char tempstr[12];
		case GAME_STATE_MENU:
			sprintf(tempstr, "Level: %d", gameplay->level);
			gfx->drawText(8, 12, tempstr, 0xFFFF);
			break;
		case GAME_STATE_PLAY:
			sprintf(tempstr, "%d", gameplay->score);
			gfx->drawText(25, 8, tempstr, 0xFFFF);
			sprintf(tempstr, "%d", gameplay->level);
			gfx->drawText(25, 16, tempstr, 0xFFFF);
			sprintf(tempstr, "%d", gameplay->lines);
			gfx->drawText(25, 24, tempstr, 0xFFFF);
			break;
		case GAME_STATE_OVER:
			gfx->drawText(6, 4, "Game Over", 0xFFFF);
			gfx->drawText(6, 12, "Score:", 0xFFFF);
			sprintf(tempstr, "%d", gameplay->score);
			gfx->drawText(6, 21, tempstr, 0xFFFF);
			break;
	}
}
