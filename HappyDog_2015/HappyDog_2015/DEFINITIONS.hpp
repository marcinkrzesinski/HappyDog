#pragma once

#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 1024

#define SPLASH_STATE_SHOW_TIME 3.0

#define SPLASH_SCENE_BACKGRODUND_FILEPTAH "Resources/res/logo.png"  //logo s5
#define MAIN_MENU_BACKGROUND_FILEPATH "Resources/res/background.png"
#define GAME_BACKGROUND_FILEPATH "Resources/res/background.png"
#define GAME_OVER_BACKGROUND_FILEPATH "Resources/res/background.png"

#define GAME_TITLE_FILEPATH "Resources/res/happydog.png"
#define PLAY_BUTTON_FILEPATH "Resources/res/PlayButton.png"

//#define PIPE_UP_FILEPATH "Resources/res/Tree.png"
#define PIPE_UP_FILEPATH "Resources/res/PipeUp.png"
#define PIPE_DOWN_FILEPATH "Resources/res/PipeDown.png"

#define SCORING_PIPE_FILEPATH "Resources/res/ScoringPipe.png"

#define LAND_FILEPATH "Resources/res/Land.png"

#define DOG_FRAME_1_FILEPATH "Resources/res/dog-01.png"
#define DOG_FRAME_2_FILEPATH "Resources/res/dog-02.png"

#define FLAPPY_FONT_FILEPATH "Resources/fonts/FlappyFont.ttf"

#define GAME_OVER_TITLE_FILEPATH "Resources/res/Game-Over-Title.png"
#define GAME_OVER_BODY_FILEPATH "Resources/res/Game-Over-Body.png"

#define BRONZE_MEDAL_FILEPATH "Resources/res/Bronze-Medal.png"
#define SILVER_MEDAL_FILEPATH "Resources/res/Silver-Medal.png"
#define GOLD_MEDAL_FILEPATH "Resources/res/Gold-Medal.png"
#define PLATINIUM_MEDAL_FILEPATH "Resources/res/Platinum-Medal.png"

#define PIPE_MOVEMENT_SPEED 200.0f
#define PIPE_SPAWN_FREQUENCY 2.0f

#define DOG_ANIMATION_DURATION 0.4f

#define DOG_STATE_STILL 1
#define DOG_STATE_FALLING 2
#define DOG_STATE_FLYING 3

#define GRAVITY 350.0f
#define FLYING_SPEED 350.0f

#define FLYING_DURATION 0.25f

enum GameStates
{
	eReady, 
	ePlaying,
	eGameOver
};

#define FLASH_SPEED 1500.0f

#define TIME_BEFORE_GAME_OVER_APPEARS 1.5f

#define BRONZE_MEDAL_SCORE 0
#define SILVER_MEDAL_SCORE 5
#define GOLD_MEDAL_SCORE 25
#define PLATINUM_MEDAL_SCORE 100