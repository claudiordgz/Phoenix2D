/*
 * Phoenix2D (RoboCup Soccer Simulation 2D League)
 * Copyright (c) 2013 Ivan Gonzalez
 *
 * This file is part of Phoenix2D.
 *
 * Phoenix2D is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Phoenix2D is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Phoenix2D.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Server.h"
#include <boost/regex.hpp>
#include <cstdlib>
namespace Phoenix
{
double      Server::AUDIO_CUT_DIST                 = 50.0;
int         Server::AUTO_MODE                      = 0;
double      Server::BACK_DASH_RATE                 = 0.6;
int         Server::BACK_PASSES                    = 1;
double      Server::BALL_ACCEL_MAX                 = 2.7;
double      Server::BALL_DECAY                     = 0.94;
double      Server::BALL_RAND                      = 0.05;
double      Server::BALL_SIZE                      = 0.085;
double      Server::BALL_SPEED_MAX                 = 3.0;
double      Server::BALL_STUCK_AREA                = 3.0;
double      Server::BALL_WEIGHT                    = 0.2;
int         Server::CATCH_BAN_CYCLE                = 5;
double      Server::CATCH_PROBABILITY              = 1.0;
double      Server::CATCHABLE_AREA_L               = 1.2;
double      Server::CATCHABLE_AREA_W               = 1.0;
double      Server::CKICK_MARGIN                   = 1.0;
int         Server::CLANG_ADVICE_WIN               = 1;
int         Server::CLANG_DEFINE_WIN               = 1;
int         Server::CLANG_DEL_WIN                  = 1;
int         Server::CLANG_INFO_WIN                 = 1;
int         Server::CLANG_MESS_DELAY               = 50;
int         Server::CLANG_MESS_PER_CYCLE           = 1;
int         Server::CLANG_META_WIN                 = 1;
int         Server::CLANG_RULE_WIN                 = 1;
int         Server::CLANG_WIN_SIZE                 = 300;
int         Server::COACH                          = 0;
int         Server::COACH_PORT                     = 6001;
int         Server::COACH_W_REFEREE                = 0;
int         Server::CONNECT_WAIT                   = 300;
double      Server::CONTROL_RADIUS                 = 2.0;
double      Server::DASH_ANGLE_STEP                = 45.0;
double      Server::DASH_POWER_RATE                = 0.006;
int         Server::DROP_BALL_TIME                 = 100;
double      Server::EFFORT_DEC                     = 0.005;
double      Server::EFFORT_DEC_THR                 = 0.3;
double      Server::EFFORT_INC                     = 0.01;
double      Server::EFFORT_INC_THR                 = 0.6;
double      Server::EFFORT_INIT                    = 1.0;
double      Server::EFFORT_MIN                     = 0.6;
int         Server::EXTRA_HALF_TIME                = 100;
int         Server::EXTRA_STAMINA                  = 50;
int         Server::FORBID_KICK_OFF_OFFSIDE        = 1;
int         Server::FOUL_CYCLES                    = 5;
double      Server::FOUL_DETECT_PROBABILITY        = 0.5;
int         Server::FOUL_EXPONENT                  = 10;
int         Server::FREE_KICK_FAULTS               = 1;
int         Server::FREEFORM_SEND_PERIOD           = 20;
int         Server::FREEFORM_WAIT_PERIOD           = 600;
int         Server::FULLSTATE_L                    = 0;
int         Server::FULLSTATE_R                    = 0;
int         Server::GAME_LOG_COMPRESSION           = 0;
int         Server::GAME_LOG_DATED                 = 1;
std::string Server::GAME_LOG_DIR                   = "./";
int         Server::GAME_LOG_FIXED                 = 0;
std::string Server::GAME_LOG_FIXED_NAME            = "rcssserver";
int         Server::GAME_LOG_VERSION               = 5;
int         Server::GAME_LOGGING                   = 1;
int         Server::GAME_OVER_WAIT                 = 100;
double      Server::GOAL_WIDTH                     = 14.02;
int         Server::GOALIE_MAX_MOVES               = 2;
int         Server::GOLDEN_GOAL                    = 0;
int         Server::HALF_TIME                      = 300;
int         Server::HEAR_DECAY                     = 1;
int         Server::HEAR_INC                       = 1;
int         Server::HEAR_MAX                       = 1;
int         Server::INERTIA_MOMENT                 = 5;
int         Server::KEEPAWAY                       = 1;
int         Server::KEEPAWAY_LENGTH                = 20;
int         Server::KEEPAWAY_LOG_DATED             = 1;
std::string Server::KEEPAWAY_LOG_DIR               = "./";
int         Server::KEEPAWAY_LOG_FIXED             = 0;
std::string Server::KEEPAWAY_LOG_FIXED_NAME        = "rcssserver";
int         Server::KEEPAWAY_LOGGING               = 1;
int         Server::KEEPAWAY_START                 = -1;
int         Server::KEEPAWAY_WIDTH                 = 20;
int         Server::KICK_OFF_WAIT                  = 100;
double      Server::KICK_POWER_RATE                = 0.027;
double      Server::KICK_RAND                      = 0.1;
double      Server::KICK_RAND_FACTOR_L             = 1.0;
double      Server::KICK_RAND_FACTOR_R             = 1.0;
double      Server::KICKABLE_MARGIN                = 0.7;
std::string Server::LANDMARK_FILE                  = "~/.rcssserver-landmark.xml";
std::string Server::LOG_DATE_FORMAT                = "%Y%m%d%H%M-";
int         Server::LOG_TIMES                      = 0;
double      Server::MAX_BACK_TACKLE_POWER          = 0.0;
double      Server::MAX_DASH_ANGLE                 = 180.0;
double      Server::MAX_DASH_POWER                 = 100.0;
int         Server::MAX_GOAL_KICKS                 = 3;
double      Server::MAX_TACKLE_POWER               = 100.0;
double      Server::MAXMOMENT                      = 180.0;
double      Server::MAXNECKANG                     = 90.0;
double      Server::MAXNECKMOMENT                  = 180.0;
double      Server::MAXPOWER                       = 100.0;
double      Server::MIN_DASH_ANGLE                 = -180.0;
double      Server::MIN_DASH_POWER                 = -100.0;
double      Server::MINMOMENT                      = -180.0;
double      Server::MINNECKANG                     = -90.0;
double      Server::MINNECKMOMENT                  = -180.0;
double      Server::MINPOWER                       = -100.0;
int         Server::NR_EXTRA_HALFS                 = 2;
int         Server::NR_NORMAL_HALFS                = 2;
double      Server::OFFSIDE_ACTIVE_AREA_SIZE       = 2.5;
double      Server::OFFSIDE_KICK_MARGIN            = 9.15;
int         Server::OLCOACH_PORT                   = 6002;
int         Server::OLD_COACH_HEAR                 = 0;
int         Server::PEN_ALLOW_MULT_KICKS           = 1;
int         Server::PEN_BEFORE_SETUP_WAIT          = 10;
int         Server::PEN_COACH_MOVES_PLAYERS        = 1;
double      Server::PEN_DIST_X                     = 42.5;
int         Server::PEN_MAX_EXTRA_KICKS            = 5;
double      Server::PEN_MAX_GOALIE_DIST_X          = 14.0;
int         Server::PEN_NR_KICKS                   = 5;
double      Server::PEN_RANDOM_WINNER              = 0;
int         Server::PEN_READY_WAIT                 = 10;
int         Server::PEN_SETUP_WAIT                 = 70;
int         Server::PEN_TAKEN_WAIT                 = 150;
int         Server::PENALTY_SHOOT_OUTS             = 1;
double      Server::PLAYER_ACCEL_MAX               = 1.0;
double      Server::PLAYER_DECAY                   = 0.4;
double      Server::PLAYER_RAND                    = 0.1;
double      Server::PLAYER_SIZE                    = 0.3;
double      Server::PLAYER_SPEED_MAX               = 1.05;
double      Server::PLAYER_SPEED_MAX_MIN           = 0.75;
double      Server::PLAYER_WEIGHT                  = 60.0;
int         Server::POINT_TO_BAN                   = 5;
int         Server::POINT_TO_DURATION              = 20;
int         Server::PORT                           = 6000;
double      Server::PRAND_FACTOR_L                 = 1.0;
double      Server::PRAND_FACTOR_R                 = 1.0;
int         Server::PROFILE                        = 0;
int         Server::PROPER_GOAL_KICKS              = 0;
double      Server::QUANTIZE_STEP                  = 0.1;
double      Server::QUANTIZE_STEP_L                = 0.01;
int         Server::RECORD_MESSAGES                = 0;
double      Server::RECOVER_DEC                    = 0.002;
double      Server::RECOVER_DEC_THR                = 0.3;
double      Server::RECOVER_INIT                   = 1.0;
double      Server::RECOVER_MIN                    = 0.5;
int         Server::RECV_STEP                      = 10;
double      Server::RED_CARD_PROBABILITY           = 0.0;
int         Server::SAY_COACH_CNT_MAX              = 128;
int         Server::SAY_COACH_MSG_SIZE             = 128;
int         Server::SAY_MSG_SIZE                   = 10;
int         Server::SEND_COMMS                     = 0;
int         Server::SEND_STEP                      = 150;
int         Server::SEND_VI_STEP                   = 100;
int         Server::SENSE_BODY_STEP                = 100;
double      Server::SIDE_DASH_RATE                 = 0.4;
int         Server::SIMULATOR_STEP                 = 100;
double      Server::SLOW_DOWN_FACTOR               = 1.0;
double      Server::SLOWNESS_ON_TOP_FOR_LEFT_TEAM  = 1.0;
double      Server::SLOWNESS_ON_TOP_FOR_RIGHT_TEAM = 1.0;
int         Server::STAMINA_CAPACITY               = 130600;
int         Server::STAMINA_INC_MAX                = 45;
int         Server::STAMINA_MAX                    = 8000;
int         Server::START_GOAL_L                   = 0;
int         Server::START_GOAL_R                   = 0;
double      Server::STOPPED_BALL_VEL               = 0.01;
int         Server::SYNCH_MICRO_SLEEP              = 1;
int         Server::SYNCH_MODE                     = 0;
int         Server::SYNCH_OFFSET                   = 60;
int         Server::SYNCH_SEE_OFFSET               = 0;
double      Server::TACKLE_BACK_DIST               = 0.0;
int         Server::TACKLE_CYCLES                  = 10;
double      Server::TACKLE_DIST                    = 2.0;
int         Server::TACKLE_EXPONENT                = 6;
double      Server::TACKLE_POWER_RATE              = 0.027;
double      Server::TACKLE_RAND_FACTOR             = 2.0;
double      Server::TACKLE_WIDTH                   = 1.25;
double      Server::TEAM_ACTUATOR_NOISE            = 0.0;
std::string Server::TEAM_L_START                   = "";
std::string Server::TEAM_R_START                   = "";
int         Server::TEXT_LOG_COMPRESSION           = 0;
int         Server::TEXT_LOG_DATED                 = 1;
std::string Server::TEXT_LOG_DIR                   = "./";
int         Server::TEXT_LOG_FIXED                 = 0;
std::string Server::TEXT_LOG_FIXED_NAME            = "rcssserver";
int         Server::TEXT_LOGGING                   = 1;
int         Server::USE_OFFSIDE                    = 1;
int         Server::VERBOSE                        = 0;
double      Server::VISIBLE_ANGLE                  = 90.0;
double      Server::VISIBLE_DISTANCE               = 3.0;
double      Server::WIND_ANG                       = 0.0;
double      Server::WIND_DIR                       = 0.0;
double      Server::WIND_FORCE                     = 0.0;
double      Server::WIND_NONE                      = 0.0;
double      Server::WIND_RAND                      = 0.0;
double      Server::WIND_RANDOM                    = 0.0;

Server::Server(std::string server_params) {
	this->server_params = server_params;
	Server::AUDIO_CUT_DIST                 = atof((getParameter("audio_cut_dist").c_str()));
	Server::AUTO_MODE                      = atoi((getParameter("auto_mode").c_str()));
	Server::BACK_DASH_RATE                 = atof((getParameter("back_dash_rate").c_str()));
	Server::BACK_PASSES                    = atoi((getParameter("back_passes").c_str()));
	Server::BALL_ACCEL_MAX                 = atof((getParameter("ball_accel_max").c_str()));
	Server::BALL_DECAY                     = atof((getParameter("ball_decay").c_str()));
	Server::BALL_RAND                      = atof((getParameter("ball_rand").c_str()));
	Server::BALL_SIZE                      = atof((getParameter("ball_size").c_str()));
	Server::BALL_SPEED_MAX                 = atof((getParameter("ball_speed_max").c_str()));
	Server::BALL_STUCK_AREA                = atof((getParameter("ball_stuck_area").c_str()));
	Server::BALL_WEIGHT                    = atof((getParameter("ball_weight").c_str()));
	Server::CATCH_BAN_CYCLE                = atoi((getParameter("catch_ban_cycle").c_str()));
	Server::CATCH_PROBABILITY              = atof((getParameter("catch_probability").c_str()));
	Server::CATCHABLE_AREA_L               = atof((getParameter("catchable_area_l").c_str()));
	Server::CATCHABLE_AREA_W               = atof((getParameter("catchable_area_w").c_str()));
	Server::CKICK_MARGIN                   = atof((getParameter("ckick_margin").c_str()));
	Server::CLANG_ADVICE_WIN               = atoi((getParameter("clang_advice_win").c_str()));
	Server::CLANG_DEFINE_WIN               = atoi((getParameter("clang_define_win").c_str()));
	Server::CLANG_DEL_WIN                  = atoi((getParameter("clang_del_win").c_str()));
	Server::CLANG_INFO_WIN                 = atoi((getParameter("clang_info_win").c_str()));
	Server::CLANG_MESS_DELAY               = atoi((getParameter("clang_mess_delay").c_str()));
	Server::CLANG_MESS_PER_CYCLE           = atoi((getParameter("clang_mess_per_cycle").c_str()));
	Server::CLANG_META_WIN                 = atoi((getParameter("clang_meta_win").c_str()));
	Server::CLANG_RULE_WIN                 = atoi((getParameter("clang_rule_win").c_str()));
	Server::CLANG_WIN_SIZE                 = atoi((getParameter("clang_win_size").c_str()));
	Server::COACH                          = atoi((getParameter("coach").c_str()));
	Server::COACH_PORT                     = atoi((getParameter("coach_port").c_str()));
	Server::COACH_W_REFEREE                = atoi((getParameter("coach_w_referee").c_str()));
	Server::CONNECT_WAIT                   = atoi((getParameter("connect_wait").c_str()));
	Server::CONTROL_RADIUS                 = atof((getParameter("control_radius").c_str()));
	Server::DASH_ANGLE_STEP                = atof((getParameter("dash_angle_step").c_str()));
	Server::DASH_POWER_RATE                = atof((getParameter("dash_power_rate").c_str()));
	Server::DROP_BALL_TIME                 = atoi((getParameter("drop_ball_time").c_str()));
	Server::EFFORT_DEC                     = atof((getParameter("effort_dec").c_str()));
	Server::EFFORT_DEC_THR                 = atof((getParameter("effort_dec_thr").c_str()));
	Server::EFFORT_INC                     = atof((getParameter("effort_inc").c_str()));
	Server::EFFORT_INC_THR                 = atof((getParameter("effort_inc_thr").c_str()));
	Server::EFFORT_INIT                    = atof((getParameter("effort_init").c_str()));
	Server::EFFORT_MIN                     = atof((getParameter("effort_min").c_str()));
	Server::EXTRA_HALF_TIME                = atoi((getParameter("extra_half_time").c_str()));
	Server::EXTRA_STAMINA                  = atoi((getParameter("extra_stamina").c_str()));
	Server::FORBID_KICK_OFF_OFFSIDE        = atoi((getParameter("forbid_kick_off_offside").c_str()));
	Server::FOUL_CYCLES                    = atoi((getParameter("foul_cycles").c_str()));
	Server::FOUL_DETECT_PROBABILITY        = atof((getParameter("foul_detect_probability").c_str()));
	Server::FOUL_EXPONENT                  = atoi((getParameter("foul_exponent").c_str()));
	Server::FREE_KICK_FAULTS               = atoi((getParameter("free_kick_faults").c_str()));
	Server::FREEFORM_SEND_PERIOD           = atoi((getParameter("freeform_send_period").c_str()));
	Server::FREEFORM_WAIT_PERIOD           = atoi((getParameter("freeform_wait_period").c_str()));
	Server::FULLSTATE_L                    = atoi((getParameter("fullstate_l").c_str()));
	Server::FULLSTATE_R                    = atoi((getParameter("fullstate_r").c_str()));
	Server::GAME_LOG_COMPRESSION           = atoi((getParameter("game_log_compression").c_str()));
	Server::GAME_LOG_DATED                 = atoi((getParameter("game_log_dated").c_str()));
	Server::GAME_LOG_DIR                   = getParameter("game_log_dir");
	Server::GAME_LOG_FIXED                 = atoi((getParameter("game_log_fixed").c_str()));
	Server::GAME_LOG_FIXED_NAME            = getParameter("game_log_fixed_name");
	Server::GAME_LOG_VERSION               = atoi((getParameter("game_log_version").c_str()));
	Server::GAME_LOGGING                   = atoi((getParameter("game_logging").c_str()));
	Server::GAME_OVER_WAIT                 = atoi((getParameter("game_over_wait").c_str()));
	Server::GOAL_WIDTH                     = atof((getParameter("goal_width").c_str()));
	Server::GOALIE_MAX_MOVES               = atoi((getParameter("goalie_max_moves").c_str()));
	Server::GOLDEN_GOAL                    = atoi((getParameter("golden_goal").c_str()));
	Server::HALF_TIME                      = atoi((getParameter("half_time").c_str()));
	Server::HEAR_DECAY                     = atoi((getParameter("hear_decay").c_str()));
	Server::HEAR_INC                       = atoi((getParameter("hear_inc").c_str()));
	Server::HEAR_MAX                       = atoi((getParameter("hear_max").c_str()));
	Server::INERTIA_MOMENT                 = atoi((getParameter("inertia_moment").c_str()));
	Server::KEEPAWAY                       = atoi((getParameter("keepaway").c_str()));
	Server::KEEPAWAY_LENGTH                = atoi((getParameter("keepaway_length").c_str()));
	Server::KEEPAWAY_LOG_DATED             = atoi((getParameter("keepaway_log_dated").c_str()));
	Server::KEEPAWAY_LOG_DIR               = getParameter("keepaway_log_dir");
	Server::KEEPAWAY_LOG_FIXED             = atoi((getParameter("keepaway_log_fixed").c_str()));
	Server::KEEPAWAY_LOG_FIXED_NAME        = getParameter("keepaway_log_fixed_name");
	Server::KEEPAWAY_LOGGING               = atoi((getParameter("keepaway_logging").c_str()));
	Server::KEEPAWAY_START                 = atoi((getParameter("keepaway_start").c_str()));
	Server::KEEPAWAY_WIDTH                 = atoi((getParameter("keepaway_width").c_str()));
	Server::KICK_OFF_WAIT                  = atoi((getParameter("kick_off_wait").c_str()));
	Server::KICK_POWER_RATE                = atof((getParameter("kick_power_rate").c_str()));
	Server::KICK_RAND                      = atof((getParameter("kick_rand").c_str()));
	Server::KICK_RAND_FACTOR_L             = atof((getParameter("kick_rand_factor_l").c_str()));
	Server::KICK_RAND_FACTOR_R             = atof((getParameter("kick_rand_factor_r").c_str()));
	Server::KICKABLE_MARGIN                = atof((getParameter("kickable_margin").c_str()));
	Server::LANDMARK_FILE                  = getParameter("landmark_file");
	Server::LOG_DATE_FORMAT                = getParameter("log_date_format");
	Server::LOG_TIMES                      = atoi((getParameter("log_times").c_str()));
	Server::MAX_BACK_TACKLE_POWER          = atof((getParameter("max_back_tackle_power").c_str()));
	Server::MAX_DASH_ANGLE                 = atof((getParameter("max_dash_angle").c_str()));
	Server::MAX_DASH_POWER                 = atof((getParameter("max_dash_power").c_str()));
	Server::MAX_GOAL_KICKS                 = atoi((getParameter("max_goal_kicks").c_str()));
	Server::MAX_TACKLE_POWER               = atof((getParameter("max_tackle_power").c_str()));
	Server::MAXMOMENT                      = atof((getParameter("maxmoment").c_str()));
	Server::MAXNECKANG                     = atof((getParameter("maxneckang").c_str()));
	Server::MAXNECKMOMENT                  = atof((getParameter("maxneckmoment").c_str()));
	Server::MAXPOWER                       = atof((getParameter("maxpower").c_str()));
	Server::MIN_DASH_ANGLE                 = atof((getParameter("min_dash_angle").c_str()));
	Server::MIN_DASH_POWER                 = atof((getParameter("min_dash_power").c_str()));
	Server::MINMOMENT                      = atof((getParameter("minmoment").c_str()));
	Server::MINNECKANG                     = atof((getParameter("minneckang").c_str()));
	Server::MINNECKMOMENT                  = atof((getParameter("minneckmoment").c_str()));
	Server::MINPOWER                       = atof((getParameter("minpower").c_str()));
	Server::NR_EXTRA_HALFS                 = atoi((getParameter("nr_extra_halfs").c_str()));
	Server::NR_NORMAL_HALFS                = atoi((getParameter("nr_normal_halfs").c_str()));
	Server::OFFSIDE_ACTIVE_AREA_SIZE       = atof((getParameter("offside_active_area_size").c_str()));
	Server::OFFSIDE_KICK_MARGIN            = atof((getParameter("offside_kick_margin").c_str()));
	Server::OLCOACH_PORT                   = atoi((getParameter("olcoach_port").c_str()));
	Server::OLD_COACH_HEAR                 = atoi((getParameter("old_coach_hear").c_str()));
	Server::PEN_ALLOW_MULT_KICKS           = atoi((getParameter("pen_allow_mult_kicks").c_str()));
	Server::PEN_BEFORE_SETUP_WAIT          = atoi((getParameter("pen_before_setup_wait").c_str()));
	Server::PEN_COACH_MOVES_PLAYERS        = atoi((getParameter("pen_coach_moves_players").c_str()));
	Server::PEN_DIST_X                     = atof((getParameter("pen_dist_x").c_str()));
	Server::PEN_MAX_EXTRA_KICKS            = atoi((getParameter("pen_max_extra_kicks").c_str()));
	Server::PEN_MAX_GOALIE_DIST_X          = atof((getParameter("pen_max_goalie_dist_x").c_str()));
	Server::PEN_NR_KICKS                   = atoi((getParameter("pen_nr_kicks").c_str()));
	Server::PEN_RANDOM_WINNER              = atof((getParameter("pen_random_winner").c_str()));
	Server::PEN_READY_WAIT                 = atoi((getParameter("pen_ready_wait").c_str()));
	Server::PEN_SETUP_WAIT                 = atoi((getParameter("pen_setup_wait").c_str()));
	Server::PEN_TAKEN_WAIT                 = atoi((getParameter("pen_taken_wait").c_str()));
	Server::PENALTY_SHOOT_OUTS             = atoi((getParameter("penalty_shoot_outs").c_str()));
	Server::PLAYER_ACCEL_MAX               = atof((getParameter("player_accel_max").c_str()));
	Server::PLAYER_DECAY                   = atof((getParameter("player_decay").c_str()));
	Server::PLAYER_RAND                    = atof((getParameter("player_rand").c_str()));
	Server::PLAYER_SIZE                    = atof((getParameter("player_size").c_str()));
	Server::PLAYER_SPEED_MAX               = atof((getParameter("player_speed_max").c_str()));
	Server::PLAYER_SPEED_MAX_MIN           = atof((getParameter("player_speed_max_min").c_str()));
	Server::PLAYER_WEIGHT                  = atof((getParameter("player_weight").c_str()));
	Server::POINT_TO_BAN                   = atoi((getParameter("point_to_ban").c_str()));
	Server::POINT_TO_DURATION              = atoi((getParameter("point_to_duration").c_str()));
	Server::PORT                           = atoi((getParameter("port").c_str()));
	Server::PRAND_FACTOR_L                 = atof((getParameter("prand_factor_l").c_str()));
	Server::PRAND_FACTOR_R                 = atof((getParameter("prand_factor_r").c_str()));
	Server::PROFILE                        = atoi((getParameter("profile").c_str()));
	Server::PROPER_GOAL_KICKS              = atoi((getParameter("proper_goal_kicks").c_str()));
	Server::QUANTIZE_STEP                  = atof((getParameter("quantize_step").c_str()));
	Server::QUANTIZE_STEP_L                = atof((getParameter("quantize_step_l").c_str()));
	Server::RECORD_MESSAGES                = atoi((getParameter("record_messages").c_str()));
	Server::RECOVER_DEC                    = atof((getParameter("recover_dec").c_str()));
	Server::RECOVER_DEC_THR                = atof((getParameter("recover_dec_thr").c_str()));
	Server::RECOVER_INIT                   = atof((getParameter("recover_init").c_str()));
	Server::RECOVER_MIN                    = atof((getParameter("recover_min").c_str()));
	Server::RECV_STEP                      = atoi((getParameter("recv_step").c_str()));
	Server::RED_CARD_PROBABILITY           = atof((getParameter("red_card_probability").c_str()));
	Server::SAY_COACH_CNT_MAX              = atoi((getParameter("say_coach_cnt_max").c_str()));
	Server::SAY_COACH_MSG_SIZE             = atoi((getParameter("say_coach_msg_size").c_str()));
	Server::SAY_MSG_SIZE                   = atoi((getParameter("say_msg_size").c_str()));
	Server::SEND_COMMS                     = atoi((getParameter("send_comms").c_str()));
	Server::SEND_STEP                      = atoi((getParameter("send_step").c_str()));
	Server::SEND_VI_STEP                   = atoi((getParameter("send_vi_step").c_str()));
	Server::SENSE_BODY_STEP                = atoi((getParameter("sense_body_step").c_str()));
	Server::SIDE_DASH_RATE                 = atof((getParameter("side_dash_rate").c_str()));
	Server::SIMULATOR_STEP                 = atoi((getParameter("simulator_step").c_str()));
	Server::SLOW_DOWN_FACTOR               = atof((getParameter("slow_down_factor").c_str()));
	Server::SLOWNESS_ON_TOP_FOR_LEFT_TEAM  = atof((getParameter("slowness_on_top_for_left_team").c_str()));
	Server::SLOWNESS_ON_TOP_FOR_RIGHT_TEAM = atof((getParameter("slowness_on_top_for_right_team").c_str()));
	Server::STAMINA_CAPACITY               = atoi((getParameter("stamina_capacity").c_str()));
	Server::STAMINA_INC_MAX                = atoi((getParameter("stamina_inc_max").c_str()));
	Server::STAMINA_MAX                    = atoi((getParameter("stamina_max").c_str()));
	Server::START_GOAL_L                   = atoi((getParameter("start_goal_l").c_str()));
	Server::START_GOAL_R                   = atoi((getParameter("start_goal_r").c_str()));
	Server::STOPPED_BALL_VEL               = atof((getParameter("stopped_ball_vel").c_str()));
	Server::SYNCH_MICRO_SLEEP              = atoi((getParameter("synch_micro_sleep").c_str()));
	Server::SYNCH_MODE                     = atoi((getParameter("synch_mode").c_str()));
	Server::SYNCH_OFFSET                   = atoi((getParameter("synch_offset").c_str()));
	Server::SYNCH_SEE_OFFSET               = atoi((getParameter("synch_see_offset").c_str()));
	Server::TACKLE_BACK_DIST               = atof((getParameter("tackle_back_dist").c_str()));
	Server::TACKLE_CYCLES                  = atoi((getParameter("tackle_cycles").c_str()));
	Server::TACKLE_DIST                    = atof((getParameter("tackle_dist").c_str()));
	Server::TACKLE_EXPONENT                = atoi((getParameter("tackle_exponent").c_str()));
	Server::TACKLE_POWER_RATE              = atof((getParameter("tackle_power_rate").c_str()));
	Server::TACKLE_RAND_FACTOR             = atof((getParameter("tackle_rand_factor").c_str()));
	Server::TACKLE_WIDTH                   = atof((getParameter("tackle_width").c_str()));
	Server::TEAM_ACTUATOR_NOISE            = atof((getParameter("team_actuator_noise").c_str()));
	Server::TEAM_L_START                   = getParameter("team_l_start");
	Server::TEAM_R_START                   = getParameter("team_r_start");
	Server::TEXT_LOG_COMPRESSION           = atoi((getParameter("text_log_compression").c_str()));
	Server::TEXT_LOG_DATED                 = atoi((getParameter("text_log_dated").c_str()));
	Server::TEXT_LOG_DIR                   = getParameter("text_log_dir");
	Server::TEXT_LOG_FIXED                 = atoi((getParameter("text_log_fixed").c_str()));
	Server::TEXT_LOG_FIXED_NAME            = getParameter("text_log_fixed_name");
	Server::TEXT_LOGGING                   = atoi((getParameter("text_logging").c_str()));
	Server::USE_OFFSIDE                    = atoi((getParameter("use_offside").c_str()));
	Server::VERBOSE                        = atoi((getParameter("verbose").c_str()));
	Server::VISIBLE_ANGLE                  = atof((getParameter("visible_angle").c_str()));
	Server::VISIBLE_DISTANCE               = atof((getParameter("visible_distance").c_str()));
	Server::WIND_ANG                       = atof((getParameter("wind_ang").c_str()));
	Server::WIND_DIR                       = atof((getParameter("wind_dir").c_str()));
	Server::WIND_FORCE                     = atof((getParameter("wind_force").c_str()));
	Server::WIND_NONE                      = atof((getParameter("wind_none").c_str()));
	Server::WIND_RAND                      = atof((getParameter("wind_rand").c_str()));
	Server::WIND_RANDOM                    = atof((getParameter("wind_random").c_str()));
}

Server::~Server() {

}

std::string Server::getParameter(std::string parameter) {
	boost::regex parameter_regex("\\(" + parameter + "\\s+([\\w\\-\\.~%\"/]*)\\)");
	boost::cmatch match;
	if (boost::regex_search(server_params.c_str(), match, parameter_regex)) {
		return std::string() + match[1];
	} else {
		std::cerr << "Server::getParameter(string) -> search failed miserably for parameter " << parameter << std::endl;
		return "";
	}
}
}