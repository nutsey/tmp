#include "iq_common.h"

//# Final IQ Parameters after Ratio
////////////////////////////////
//             SIE             /
////////////////////////////////
//**  SIE-ECS
UINT32 g_ecs_tab_buf[Total_SENIDNum][4225];
SIE_EmbeddedCS g_ecs_buf[Total_SENIDNum];

SIE_CA_VIG g_ca_vig_buf[Total_SENIDNum];

////////////////////////////////
//             RHE             /
////////////////////////////////
//**  RHE-CGain
UINT32 g_rhe_ob_buf[Total_SENIDNum][5];
RHE_HAL_COLOR_GAIN_INFO g_rhe_color_gain_buf[Total_SENIDNum];

//**  RHE-WDR
UINT8 g_wdr_strength_buf[Total_SENIDNum];

//**  RHE-LCE
IQS_LCE g_lce_strength_buf[Total_SENIDNum];
UINT32 g_lce_dif_gain[Total_SENIDNum][17];
UINT32 g_lce_luma_gain[Total_SENIDNum][17];
RHE_HAL_LTC_PARAM g_lce_buf[Total_SENIDNum];

//**  RHE-GCE
SR_WDR_GCE_PARAM g_gce_strength_buf[Total_SENIDNum];

////////////////////////////////
//             IFE             /
////////////////////////////////
//**  IFE-Outlier
UINT32 g_outl_bri_buf[Total_SENIDNum][5];
UINT32 g_outl_dark_buf[Total_SENIDNum][5];
UINT32 g_outl_cnt_buf[Total_SENIDNum][2];
IFE_OUTL g_outl_set_buf[Total_SENIDNum];

//**  IFE-Spatial
UINT32 g_spatial_w_buf[Total_SENIDNum][6];
Spatial_Filter g_spatial_buf[Total_SENIDNum];

//**  IFE-Range
UINT32 g_range_a_thr_buf[Total_SENIDNum][6];
UINT32 g_range_a_lut_buf[Total_SENIDNum][17];
UINT32 g_range_b_thr_buf[Total_SENIDNum][6];
UINT32 g_range_b_lut_buf[Total_SENIDNum][17];
RangeCFGA g_range_a_buf[Total_SENIDNum];
RangeCFGB g_range_b_buf[Total_SENIDNum];
Range_Filter g_range_filter_buf[Total_SENIDNum];
IFE_FILT g_filter_buf[Total_SENIDNum];

//**  IFE-CLAMP
RANGE_FILT_CLAMP_PARAM g_filter_clamp_buf[Total_SENIDNum];

//**  IFE-CGain
UINT32 g_ife_ob_buf[Total_SENIDNum][5];
UINT32 g_ife_c_gain_buf[Total_SENIDNum][5];
IFE_CG g_ife_color_gain_buf[Total_SENIDNum];

//**  IFE-Vig
IQS_VIG_CENTER_RATIO g_vig_center_buf[Total_SENIDNum];
IQS_VIG_SET g_vig_set_temp[Total_SENIDNum];
IQS_VIG_SET g_vig_set_buf[Total_SENIDNum];
IFE_VIG g_vig_buf[Total_SENIDNum];

//**  IFE-Gbal
UINT8 g_gbal_s_tab_buf[Total_SENIDNum][17];
UINT8 g_gbal_d_tab_buf[Total_SENIDNum][17];
IFE_GBAL g_gbal_buf[Total_SENIDNum];

//**  IFE-RBFill
UINT8 g_rbfill_luma_tab_buf[Total_SENIDNum][17];
UINT8 g_rbfill_ratio_tab_buf[Total_SENIDNum][32];
IFE_RBFILL g_rbfill_buf[Total_SENIDNum];

////////////////////////////////
//             DCE             /
////////////////////////////////
//**  DCE-DIST
DIST g_dist_buf[Total_SENIDNum];

//**  DCE-RADIOUS
Fact_Norm g_radious_buf[Total_SENIDNum];

//**  DCE-CFA
DCE_CFAPARAM g_cfa_buf[Total_SENIDNum];

//**  DCE-GDC
FOV g_fov_buf[Total_SENIDNum];
UINT32 g_ldc_g_lut_buf[Total_SENIDNum][65];
INT32 g_ldc_r_lut_buf[Total_SENIDNum][65];
INT32 g_ldc_b_lut_buf[Total_SENIDNum][65];

//**  DCE-CAC
Aberation g_cac_buf[Total_SENIDNum];

DCE_Distortion  g_ldc_buf[Total_SENIDNum];

////////////////////////////////
//             IPE             /
////////////////////////////////
//**  IPE-Edge EXT
UINT32 g_edge_gamma_buf[Total_SENIDNum][65];
INT16 g_edge_kernel_buf[Total_SENIDNum][12];
UINT8 g_edir_tab_buf[Total_SENIDNum][8];
IPE_DEE g_edir_ext_buf[Total_SENIDNum];
IPE_DirScorCal g_score_tab_buf[Total_SENIDNum];
IPE_DirScorCalTh g_score_th_buf[Total_SENIDNum];
IPE_KAEdgeW g_ewa_buf[Total_SENIDNum];
IPE_KBEdgeW g_ewb_buf[Total_SENIDNum];
IPE_EdgeW g_ewparam_buf[Total_SENIDNum];
IPE_EDGEEXT g_edge_ext_buf[Total_SENIDNum];

//**  IPE-Edge Enh
IPE_EDGEENH g_edge_enh_buf[Total_SENIDNum];

//**  IPE-Edge Map
EdgeMap g_ed_map_buf[Total_SENIDNum];
UINT8 g_ed_tab_buf[Total_SENIDNum][16];
EdgeMapS g_es_map_buf[Total_SENIDNum];
UINT8 g_es_tab_buf[Total_SENIDNum][16];
IPE_EDGEMAP g_edge_map_buf[Total_SENIDNum];

//**  IPE-LPF
IPE_RGBLPF g_lpf_buf[Total_SENIDNum];

//**  IPE-CC
UINT16 g_cc_matrix_buf[Total_SENIDNum][9];
UINT8 g_fs_tab_buf[Total_SENIDNum][16];
UINT8 g_fd_tab_buf[Total_SENIDNum][16];
IPE_CC g_cc_buf[Total_SENIDNum];

//**  IPE-Ycurve
UINT32 g_y_curve_buf[Total_SENIDNum][129];

//**  IPE-Gamma
UINT32 g_gamma_buf[Total_SENIDNum][129];

//**  IPE-3DCC
IPE_3DCC g_color_3d_buf[Total_SENIDNum];

//**  IPE-CCtrl
INT16 g_int_ofs_buf[Total_SENIDNum] = {0};

UINT8 g_hue_tab_blend[Total_SENIDNum][24];
UINT8 g_hue_tab_buf[Total_SENIDNum][24];
INT32 g_sat_tab_blend[Total_SENIDNum][24];
INT32 g_sat_tab_buf[Total_SENIDNum][24];
INT32 g_int_tab_blend[Total_SENIDNum][24];
INT32 g_int_tab_buf[Total_SENIDNum][24];
UINT8 g_edg_tab_buf[Total_SENIDNum][24];
UINT8 g_dds_tab_buf[Total_SENIDNum][8];

INT16 g_saturation_buf[Total_SENIDNum];
UINT32 g_awb2sat_ratio_buf[Total_SENIDNum];
INT16 g_contrast_buf[Total_SENIDNum];
INT16 g_cont2sat_adj_buf[Total_SENIDNum];
IQS_CCTRL_INFO g_cctrl_info_buf[Total_SENIDNum];
IPE_CCTRL g_cctrl_buf[Total_SENIDNum];

//**  IPE-CST
INT16 g_cst_coef_buf[Total_SENIDNum][9];
IPE_CST g_cst_buf[Total_SENIDNum];

//**  IPE-YCCFIX
IPE_YCCFIX g_ycc_fix_buf[Total_SENIDNum];

//**  IPE-NoiseParam
IPE_RAND_NR g_noise_param_buf[Total_SENIDNum];

//**  IPE-GammaRand
IPE_GamRand g_gamma_rand_buf[Total_SENIDNum];

//**  IPE-YCbCr
IPE_CCOFS g_cc_ofs_buf[Total_SENIDNum];
IPE_CCON g_ycc_contrast_buf[Total_SENIDNum];
UINT32 g_ccon_tab_buf[Total_SENIDNum][17];

////////////////////////////////
//             IFE2            /
////////////////////////////////
//**  IFE2-ReferenceCenter
UINT32 g_ref_center_y_th_buf[Total_SENIDNum][3];
UINT32 g_ref_center_y_wt_buf[Total_SENIDNum][4];
IFE2_REFCENT_Set g_ref_center_y_buf[Total_SENIDNum];
UINT32 g_ref_center_uv_th_buf[Total_SENIDNum][3];
UINT32 g_ref_center_uv_wt_buf[Total_SENIDNum][4];
IFE2_REFCENT_Set g_ref_center_uv_buf[Total_SENIDNum];
IFE2_Refcent_Param g_ref_center_buf[Total_SENIDNum];

//**  IFE2-Filter
UINT32 g_ife2filter_y_th_buf[Total_SENIDNum][5];
UINT32 g_ife2filter_y_wt_buf[Total_SENIDNum][6];
UINT32 g_ife2filter_uv_th_buf[Total_SENIDNum][5];
UINT32 g_ife2filter_uv_wt_buf[Total_SENIDNum][6];
IQS_IFE2_FILTER g_ife2filter_buf[Total_SENIDNum];

//**  IFE2-Gray
IFE2_GRAY_Statal g_gray_statical_buf[Total_SENIDNum];

////////////////////////////////
//             IME             /
////////////////////////////////
//**  IME-LCA
IME_CHRA_ADAP g_chroma_adapt_buf[Total_SENIDNum];
IME_CHRA_CADAP g_chroma_adapt_color_buf[Total_SENIDNum];
IME_CHRA_LADAP g_chroma_adapt_lum_buf[Total_SENIDNum];

//**  IME-ChromaSuppression
UINT32 g_chroma_supp_w_y_buf[Total_SENIDNum][16];
UINT32 g_chroma_supp_w_c_buf[Total_SENIDNum][16];
IME_ChromaSupp g_chroma_supp_buf[Total_SENIDNum];

//**  IME-TMNR
IME_HAL_TMNR_INFO g_tmnr_info_buf[Total_SENIDNum];

TMNR_AUTO_INFO g_tmnr_auto_info_buf[Total_SENIDNum];

///////////////////
// IPCAM set IQ info
///////////////////
void iq_set_linux_iq_info(UINT32 id, IQ_LINUX_SET_ITEM item, IQ_LINUX_SET_INFO iq_linux_set_info)
{
	UINT32 sen_id = iq_get_sensor_idx(id);

    switch (item) {
        case IQ_LINUX_SET_BRI:
    		g_e_ctrl_addr[sen_id]->cctrl.bri_ratio = IQ_CLAMP(iq_linux_set_info.bri_ratio * 2, 0, 200);
            break;

        case IQ_LINUX_SET_SAT:
    		g_e_ctrl_addr[sen_id]->cctrl.sat_ratio = IQ_CLAMP(iq_linux_set_info.sat_ratio * 2, 0, 200);
            break;

        case IQ_LINUX_SET_CON:
    		g_e_ctrl_addr[sen_id]->cctrl.con_ratio = IQ_CLAMP(iq_linux_set_info.con_ratio * 2, 0, 200);
            break;

        case IQ_LINUX_SET_SHARP:
            g_e_ctrl_addr[sen_id]->edge.ratio = IQ_CLAMP(iq_linux_set_info.sharp_ratio * 2, 0, 200);
            break;

        case IQ_LINUX_SET_HUE:
    		g_e_ctrl_addr[sen_id]->hsv.angle = IQ_CLAMP(iq_linux_set_info.hue_angle, 0, 360);
            break;

        case IQ_LINUX_SET_NR:
    		g_e_ctrl_addr[sen_id]->range_nr.ratio = IQ_CLAMP(iq_linux_set_info.nr_ratio * 2, 0, 200);
            break;

        case IQ_LINUX_SET_TNR:
            g_e_ctrl_addr[sen_id]->tnr.level = IQ_CLAMP(iq_linux_set_info.tnr.ratio, 0, 10);
            break;

        case IQ_LINUX_SET_GDC:
            g_e_ctrl_addr[sen_id]->gdc.enable = iq_linux_set_info.gdc.enable;
    		if (g_e_ctrl_addr[sen_id]->gdc.enable == ENABLE) {
    			g_e_ctrl_addr[sen_id]->gdc.ratio = IQ_CLAMP(iq_linux_set_info.gdc.ratio * 2, 0, 200);
    			IQS_DCE_Intpl(g_ldc_g_lut_addr[sen_id], g_ldc_g_lut_buf[sen_id], g_e_ctrl_addr[sen_id]->gdc.ratio, 0, 200);
                //DBG_DUMP("ori GDC table:%d,%d,,,%d\r\n",g_ldc_g_lut_addr[sen_id][0],g_ldc_g_lut_addr[sen_id][1],g_ldc_g_lut_addr[sen_id][64]);
                //DBG_DUMP("Set GDC table:%d,%d,,,%d\r\n",g_ldc_g_lut_buf[sen_id][0],g_ldc_g_lut_buf[sen_id][1],g_ldc_g_lut_buf[sen_id][64]);
    		}
            iqt_set_param_update(sen_id, ISP_LDC);
            break;

        case IQ_LINUX_SET_VIG:
            g_e_ctrl_addr[sen_id]->vig.enable = iq_linux_set_info.vig.enable;
    		if (g_e_ctrl_addr[sen_id]->vig.enable == ENABLE) {
    			g_e_ctrl_addr[sen_id]->vig.ratio = IQ_CLAMP(iq_linux_set_info.vig.ratio * 2, 0, 200);
                g_vig_center_addr[sen_id]->CenterXOffset = IQ_CLAMP(iq_linux_set_info.vig.center_x, 0, 100) * 10;
                g_vig_center_addr[sen_id]->CenterYOffset = IQ_CLAMP(iq_linux_set_info.vig.center_y, 0, 100) * 10;
    		}
            iqt_set_param_update(sen_id, ISP_VIG);
            break;
    }
}

void iq_get_linux_iq_info(UINT32 Id, IQ_LINUX_SET_INFO *iq_linux_set_info)
{
	UINT32 sen_id = iq_get_sensor_idx(Id);

	iq_linux_set_info->bri_ratio    = g_e_ctrl_addr[sen_id]->cctrl.bri_ratio / 2;   // 0~100; default:50
	iq_linux_set_info->sat_ratio    = g_e_ctrl_addr[sen_id]->cctrl.sat_ratio / 2;   // 0~100; default:50
	iq_linux_set_info->con_ratio    = g_e_ctrl_addr[sen_id]->cctrl.con_ratio / 2;   // 0~100; default:50
	iq_linux_set_info->sharp_ratio   = g_e_ctrl_addr[sen_id]->edge.ratio / 2;       // 0~100; default:50
	iq_linux_set_info->hue_angle    = g_e_ctrl_addr[sen_id]->hsv.angle;             // 0~360; default:0
	iq_linux_set_info->nr_ratio     = g_e_ctrl_addr[sen_id]->range_nr.ratio / 2;    // 0~100; default:50

	iq_linux_set_info->tnr.ratio    = g_e_ctrl_addr[sen_id]->tnr.level;             // 0~10

	iq_linux_set_info->gdc.enable   = g_e_ctrl_addr[sen_id]->gdc.enable;
	iq_linux_set_info->gdc.ratio    = g_e_ctrl_addr[sen_id]->gdc.ratio / 2;         // 0~100; default:50

	iq_linux_set_info->vig.enable   = g_e_ctrl_addr[sen_id]->vig.enable;
	iq_linux_set_info->vig.ratio    = g_e_ctrl_addr[sen_id]->vig.ratio / 2;         // 0~100; default:0
	iq_linux_set_info->vig.center_x = g_vig_center_addr[sen_id]->CenterXOffset / 10;// 0~100; default:50
	iq_linux_set_info->vig.center_y = g_vig_center_addr[sen_id]->CenterYOffset / 10;// 0~100; default:50
}

///////////////////
// IQ param interpolation for ISO
///////////////////
void iq_intpl_iso(UINT32 Id, IQS_FLOW_MSG MsgID)
{
	UINT32 IsoValue = 0, IsoStart = 0, IsoEnd = 0, IQIdxL = 0, IQIdxH = 0;
    UINT32 IsoValue_adj = 0, IsoStart_adj = 0, IsoEnd_adj = 0, IQIdxL_adj = 0, IQIdxH_adj = 0;
	UINT32 SenId_Value = iq_get_sensor_idx(Id);

    UINT32 filter_size;
    UINT32 range_thr_iso_l[6], range_thr_iso_h[6], range_lut_iso_l[17], range_lut_iso_h[17];
    UINT32 clamp_iso_l, clamp_iso_h;
    UINT32 vig_ratio[17];
    UINT32 edge_enh_iso_l, edge_enh_iso_h, sat_iso_l, sat_iso_h, con_iso_l, con_iso_h;
    IME_HAL_TMNR_INFO tmnr_info_buf_l,  tmnr_info_buf_h;

	UINT32 ui_sharp_ratio   = iq_get_ui_info(SenId_Value, IQ_UI_SHARPNESS);
    if( ui_sharp_ratio < IQ_SHARPNESS_MAX_CNT) {
        ui_sharp_ratio *= 2;
    } else {
        ui_sharp_ratio = 100;
    }
	UINT32 ui_sat_ratio     = iq_get_ui_info(SenId_Value, IQ_UI_SATURATION);
    if( ui_sat_ratio < IQ_SATURATION_MAX_CNT) {
        ui_sat_ratio *= 2;
    } else {
        ui_sat_ratio = 100;
    }
	UINT32 ui_con_ratio    = iq_get_ui_info(SenId_Value, IQ_UI_CONTRAST);
    if( ui_con_ratio < IQ_CONTRAST_MAX_CNT) {
        ui_con_ratio *= 2;
    } else {
        ui_con_ratio = 100;
    }

	iq_get_iso_range(SenId_Value, MsgID, &IsoValue, &IsoStart, &IsoEnd, &IQIdxL, &IQIdxH);
	iq_get_iso_range_adj(SenId_Value, MsgID, &IsoValue_adj, &IsoStart_adj, &IsoEnd_adj, &IQIdxL_adj, &IQIdxH_adj);

	//***********
	//**  RHE  **
	//***********
	//**  RHE-OB
	IQS_IntplTbl(g_ob_addr[SenId_Value]+IQIdxL*5, g_ob_addr[SenId_Value]+IQIdxH*5, 5, g_rhe_ob_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

	//**  RHE-LCE
	g_lce_strength_buf[SenId_Value] = *(g_lce_strength_addr[SenId_Value]+IQIdxL);
	g_lce_strength_buf[SenId_Value].uiLceLevel = IQS_Intpl(IsoValue, (g_lce_strength_addr[SenId_Value]+IQIdxL)->uiLceLevel, (g_lce_strength_addr[SenId_Value]+IQIdxH)->uiLceLevel, IsoStart, IsoEnd);
    if( IPL_AlgGetUIInfo((IPL_PROC_ID)SenId_Value, IPL_SEL_WDR_IMM) == SEL_WDR_AUTO ) {
        g_lce_strength_buf[SenId_Value].uiLceLevel += g_wdr_lce_offset_addr[SenId_Value]->mode_auto;
    } else if( IPL_AlgGetUIInfo((IPL_PROC_ID)SenId_Value, IPL_SEL_WDR_IMM) == SEL_WDR_MANUAL ) {
        g_lce_strength_buf[SenId_Value].uiLceLevel += g_wdr_lce_offset_addr[SenId_Value]->mode_manual;
    }
	g_lce_strength_buf[SenId_Value].uiLceClamp = IQS_Intpl(IsoValue, (g_lce_strength_addr[SenId_Value]+IQIdxL)->uiLceClamp, (g_lce_strength_addr[SenId_Value]+IQIdxH)->uiLceClamp, IsoStart, IsoEnd);
    iq_get_lce_setting(SenId_Value, g_lce_strength_buf[SenId_Value] ,g_lce_dif_gain[SenId_Value], g_lce_luma_gain[SenId_Value]);

	//**  RHE-GCE
	g_gce_strength_buf[SenId_Value] = *(g_gce_strength_addr[SenId_Value]+IQIdxL);
	g_gce_strength_buf[SenId_Value].uiGceDarkSth = IQS_Intpl(IsoValue, (g_gce_strength_addr[SenId_Value]+IQIdxL)->uiGceDarkSth, (g_gce_strength_addr[SenId_Value]+IQIdxH)->uiGceDarkSth, IsoStart, IsoEnd);
	g_gce_strength_buf[SenId_Value].uiGceBrightSth = IQS_Intpl(IsoValue, (g_gce_strength_addr[SenId_Value]+IQIdxL)->uiGceBrightSth, (g_gce_strength_addr[SenId_Value]+IQIdxH)->uiGceBrightSth, IsoStart, IsoEnd);

	//***********
	//**  IFE  **
	//***********
	//**  IFE-Outlier
	IQS_IntplTbl(g_outl_bri_addr[SenId_Value]+IQIdxL*5, g_outl_bri_addr[SenId_Value]+IQIdxH*5, 5, g_outl_bri_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_outl_dark_addr[SenId_Value]+IQIdxL*5, g_outl_dark_addr[SenId_Value]+IQIdxH*5, 5, g_outl_dark_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_outl_cnt_addr[SenId_Value]+IQIdxL*2, g_outl_cnt_addr[SenId_Value]+IQIdxH*2, 2,  g_outl_cnt_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	g_outl_set_buf[SenId_Value].OutlWeight = IQS_Intpl(IsoValue, (g_outl_set_addr[SenId_Value]+IQIdxL)->OutlWeight, (g_outl_set_addr[SenId_Value]+IQIdxH)->OutlWeight, IsoStart, IsoEnd);
	g_outl_set_buf[SenId_Value].OutlDarkOfs = IQS_Intpl(IsoValue, (g_outl_set_addr[SenId_Value]+IQIdxL)->OutlDarkOfs, (g_outl_set_addr[SenId_Value]+IQIdxH)->OutlDarkOfs, IsoStart, IsoEnd);
	g_outl_set_buf[SenId_Value].OutlBrightOfs = IQS_Intpl(IsoValue, (g_outl_set_addr[SenId_Value]+IQIdxL)->OutlBrightOfs, (g_outl_set_addr[SenId_Value]+IQIdxH)->OutlBrightOfs, IsoStart, IsoEnd);

	//**  IFE-Spatial
	g_spatial_buf[SenId_Value] = *(g_spatial_addr[SenId_Value]+IQIdxL);

	IQS_IntplTbl(g_spatial_w_addr[SenId_Value]+IQIdxL*6,     g_spatial_w_addr[SenId_Value]+IQIdxH*6,  6, g_spatial_w_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

	//**  IFE-Range
	g_range_b_buf[SenId_Value] = *(g_range_b_addr[SenId_Value]+IQIdxL);

    for (filter_size = 0; filter_size < 6; filter_size++) {
        range_thr_iso_l[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_a_thr_addr[SenId_Value]+IQIdxL*6+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
        range_thr_iso_h[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_a_thr_addr[SenId_Value]+IQIdxH*6+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
    }
    IQS_IntplTbl(&range_thr_iso_l[0], &range_thr_iso_h[0], 6, g_range_a_thr_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

    for (filter_size = 0; filter_size < 6; filter_size++) {
        range_thr_iso_l[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_b_thr_addr[SenId_Value]+IQIdxL*6+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
        range_thr_iso_h[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_b_thr_addr[SenId_Value]+IQIdxH*6+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
    }
    IQS_IntplTbl(&range_thr_iso_l[0], &range_thr_iso_h[0], 6, g_range_b_thr_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

    for (filter_size = 0; filter_size < 17; filter_size++) {
        range_lut_iso_l[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_a_lut_addr[SenId_Value]+IQIdxL*17+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
        range_lut_iso_h[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_a_lut_addr[SenId_Value]+IQIdxH*17+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
    }
    IQS_IntplTbl(&range_lut_iso_l[0], &range_lut_iso_h[0], 17, g_range_a_lut_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

    for (filter_size = 0; filter_size < 17; filter_size++) {
        range_lut_iso_l[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_b_lut_addr[SenId_Value]+IQIdxL*17+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
        range_lut_iso_h[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->range_nr.ratio, *(g_range_b_lut_addr[SenId_Value]+IQIdxH*17+filter_size), 0, 1023, IQS_CAL_MULTIPLY);
    }
    IQS_IntplTbl(&range_lut_iso_l[0], &range_lut_iso_h[0], 17, g_range_b_lut_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

	g_range_b_buf[SenId_Value].Rangeparam.BilatTh1 = IQS_Intpl(IsoValue, (g_range_b_addr[SenId_Value]+IQIdxL)->Rangeparam.BilatTh1, (g_range_b_addr[SenId_Value]+IQIdxH)->Rangeparam.BilatTh1, IsoStart, IsoEnd);
	g_range_b_buf[SenId_Value].Rangeparam.BilatTh2 = IQS_Intpl(IsoValue, (g_range_b_addr[SenId_Value]+IQIdxL)->Rangeparam.BilatTh2, (g_range_b_addr[SenId_Value]+IQIdxH)->Rangeparam.BilatTh2, IsoStart, IsoEnd);

	//**  IFE-CLAMP
	g_filter_clamp_buf[SenId_Value] = *(g_filter_clamp_addr[SenId_Value]+IQIdxL);

	clamp_iso_l = (UINT32)IQS_IQ_Cal(200 - g_e_ctrl_addr[SenId_Value]->range_nr.ratio, (g_filter_clamp_addr[SenId_Value]+IQIdxL)->Clamp.Th, 0, 1023, IQS_CAL_MULTIPLY);
	clamp_iso_h = (UINT32)IQS_IQ_Cal(200 - g_e_ctrl_addr[SenId_Value]->range_nr.ratio, (g_filter_clamp_addr[SenId_Value]+IQIdxH)->Clamp.Th, 0, 1023, IQS_CAL_MULTIPLY);
	g_filter_clamp_buf[SenId_Value].Clamp.Th  = IQS_Intpl(IsoValue, clamp_iso_l,    										clamp_iso_h,  										  IsoStart, IsoEnd);
	g_filter_clamp_buf[SenId_Value].Clamp.Mul = IQS_Intpl(IsoValue, (g_filter_clamp_addr[SenId_Value]+IQIdxL)->Clamp.Mul,   (g_filter_clamp_addr[SenId_Value]+IQIdxH)->Clamp.Mul, IsoStart, IsoEnd);
	g_filter_clamp_buf[SenId_Value].Clamp.Dlt = IQS_Intpl(IsoValue, (g_filter_clamp_addr[SenId_Value]+IQIdxL)->Clamp.Dlt,   (g_filter_clamp_addr[SenId_Value]+IQIdxH)->Clamp.Dlt, IsoStart, IsoEnd);
    g_filter_clamp_buf[SenId_Value].BilatW    = IQS_Intpl(IsoValue, (g_filter_clamp_addr[SenId_Value]+IQIdxL)->BilatW,      (g_filter_clamp_addr[SenId_Value]+IQIdxH)->BilatW,    IsoStart, IsoEnd);
	g_filter_clamp_buf[SenId_Value].Rth_W     = IQS_Intpl(IsoValue, (g_filter_clamp_addr[SenId_Value]+IQIdxL)->Rth_W,       (g_filter_clamp_addr[SenId_Value]+IQIdxH)->Rth_W,     IsoStart, IsoEnd);
	g_filter_clamp_buf[SenId_Value].Bin       = IQS_Intpl(IsoValue, (g_filter_clamp_addr[SenId_Value]+IQIdxL)->Bin,         (g_filter_clamp_addr[SenId_Value]+IQIdxH)->Bin,       IsoStart, IsoEnd);
	g_filter_clamp_buf[SenId_Value].BitDither = IQS_Intpl(IsoValue, (g_filter_clamp_addr[SenId_Value]+IQIdxL)->BitDither,   (g_filter_clamp_addr[SenId_Value]+IQIdxH)->BitDither, IsoStart, IsoEnd);

    //** IFE-VIG
    g_vig_set_buf[SenId_Value].TabGain = g_vig_set_temp[SenId_Value].TabGain;
	for (filter_size = 0; filter_size < 17; filter_size++) {
        vig_ratio[filter_size] = (UINT32)IQS_IQ_Cal(g_e_ctrl_addr[SenId_Value]->vig.ratio, g_vig_set_temp[SenId_Value].Tab[filter_size], 0, 1023, IQS_CAL_MULTIPLY);
	}
    IQS_IntplTbl(&vig_ratio[0], &g_vig_init.Tab[0], 17, g_vig_set_buf[SenId_Value].Tab, IsoValue, g_vig_iso_th_addr[SenId_Value]->iso_l, g_vig_iso_th_addr[SenId_Value]->iso_h);

	//**  IFE-Gbal
	g_gbal_buf[SenId_Value] = *(g_gbal_addr[SenId_Value]+IQIdxL);

    IQS_IntplTblUint8(g_gbal_s_tab_addr[SenId_Value]+IQIdxL*17,g_gbal_s_tab_addr[SenId_Value]+IQIdxH*17,  17, g_gbal_s_tab_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
    IQS_IntplTblUint8(g_gbal_d_tab_addr[SenId_Value]+IQIdxL*17,g_gbal_d_tab_addr[SenId_Value]+IQIdxH*17,  17, g_gbal_d_tab_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	g_gbal_buf[SenId_Value].GbalThr = IQS_Intpl(IsoValue, (g_gbal_addr[SenId_Value]+IQIdxL)->GbalThr, (g_gbal_addr[SenId_Value]+IQIdxH)->GbalThr, IsoStart, IsoEnd);
	g_gbal_buf[SenId_Value].uiGbalSmtThr = IQS_Intpl(IsoValue, (g_gbal_addr[SenId_Value]+IQIdxL)->uiGbalSmtThr, (g_gbal_addr[SenId_Value]+IQIdxH)->uiGbalSmtThr, IsoStart, IsoEnd);

	//**  IFE-RBFill
	g_rbfill_buf[SenId_Value] = *(g_rbfill_addr[SenId_Value]+IQIdxL);

    IQS_IntplTblUint8(g_rbfill_luma_tab_addr[SenId_Value]+IQIdxL*17, g_rbfill_luma_tab_addr[SenId_Value]+IQIdxH*17,  17, g_rbfill_luma_tab_buf[SenId_Value],   IsoValue, IsoStart, IsoEnd);
    IQS_IntplTblUint8(g_rbfill_ratio_tab_addr[SenId_Value]+IQIdxL*32, g_rbfill_ratio_tab_addr[SenId_Value]+IQIdxH*32,  32, g_rbfill_ratio_tab_buf[SenId_Value],   IsoValue, IsoStart, IsoEnd);
	g_rbfill_buf[SenId_Value].uiRBRatioMode = IQS_Intpl(IsoValue, (g_rbfill_addr[SenId_Value]+IQIdxL)->uiRBRatioMode, (g_rbfill_addr[SenId_Value]+IQIdxH)->uiRBRatioMode, IsoStart, IsoEnd);

	//**  IFE-CGain & OB
	IQS_IntplTbl(g_ob_addr[SenId_Value]+IQIdxL*5, g_ob_addr[SenId_Value]+IQIdxH*5, 5, g_ife_ob_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

	//***********
	//**  IPE  **
	//***********
	//**  IPE-Edge Ext
	memcpy(g_edge_kernel_buf[SenId_Value], g_edge_kernel_addr[SenId_Value]+IQIdxL*12, sizeof(INT16) * 12);
	memcpy(g_edir_tab_buf[SenId_Value], g_edir_tab_addr[SenId_Value]+IQIdxL*8, sizeof(UINT8) * 8);
	g_edir_ext_buf[SenId_Value] = *(g_edir_ext_addr[SenId_Value]+IQIdxL);
	g_score_tab_buf[SenId_Value] = *(g_score_tab_addr[SenId_Value]+IQIdxL);
	g_score_th_buf[SenId_Value] = *(g_score_th_addr[SenId_Value]+IQIdxL);
	g_ewa_buf[SenId_Value] = *(g_ewa_addr[SenId_Value]+IQIdxL);
	g_ewb_buf[SenId_Value] = *(g_ewb_addr[SenId_Value]+IQIdxL);
	g_ewparam_buf[SenId_Value] = *(g_ewparam_addr[SenId_Value]+IQIdxL);

	g_score_th_buf[SenId_Value].uiScoreTh0 = IQS_Intpl(IsoValue, (g_score_th_addr[SenId_Value]+IQIdxL)->uiScoreTh0,     (g_score_th_addr[SenId_Value]+IQIdxH)->uiScoreTh0,  IsoStart, IsoEnd);
	g_score_th_buf[SenId_Value].uiScoreTh1 = IQS_Intpl(IsoValue, (g_score_th_addr[SenId_Value]+IQIdxL)->uiScoreTh1,     (g_score_th_addr[SenId_Value]+IQIdxH)->uiScoreTh1,  IsoStart, IsoEnd);
	g_score_th_buf[SenId_Value].uiScoreTh2 = IQS_Intpl(IsoValue, (g_score_th_addr[SenId_Value]+IQIdxL)->uiScoreTh2,     (g_score_th_addr[SenId_Value]+IQIdxH)->uiScoreTh2,  IsoStart, IsoEnd);
	g_score_th_buf[SenId_Value].uiScoreTh3 = IQS_Intpl(IsoValue, (g_score_th_addr[SenId_Value]+IQIdxL)->uiScoreTh3,     (g_score_th_addr[SenId_Value]+IQIdxH)->uiScoreTh3,  IsoStart, IsoEnd);
	g_ewparam_buf[SenId_Value].uiEWDir0 = IQS_Intpl(IsoValue, (g_ewparam_addr[SenId_Value]+IQIdxL)->uiEWDir0, (g_ewparam_addr[SenId_Value]+IQIdxH)->uiEWDir0, IsoStart, IsoEnd);
	g_ewparam_buf[SenId_Value].uiEWDir1 = IQS_Intpl(IsoValue, (g_ewparam_addr[SenId_Value]+IQIdxL)->uiEWDir1, (g_ewparam_addr[SenId_Value]+IQIdxH)->uiEWDir1, IsoStart, IsoEnd);
	g_ewparam_buf[SenId_Value].uiEWDir2 = IQS_Intpl(IsoValue, (g_ewparam_addr[SenId_Value]+IQIdxL)->uiEWDir2, (g_ewparam_addr[SenId_Value]+IQIdxH)->uiEWDir2, IsoStart, IsoEnd);

	//**  IPE-Edge Enhance
	g_edge_enh_buf[SenId_Value] = *(g_edge_enh_addr[SenId_Value]+IQIdxL);

	edge_enh_iso_l = (UINT32)IQS_IQ_Cal(ui_sharp_ratio * g_e_ctrl_addr[SenId_Value]->edge.ratio / 100, (g_edge_enh_addr[SenId_Value]+IQIdxL)->EnhP, 0, 1023, IQS_CAL_MULTIPLY);
	edge_enh_iso_h = (UINT32)IQS_IQ_Cal(ui_sharp_ratio * g_e_ctrl_addr[SenId_Value]->edge.ratio / 100, (g_edge_enh_addr[SenId_Value]+IQIdxH)->EnhP, 0, 1023, IQS_CAL_MULTIPLY);
	g_edge_enh_buf[SenId_Value].EnhP = IQS_Intpl(IsoValue, edge_enh_iso_l, edge_enh_iso_h, IsoStart, IsoEnd);
	edge_enh_iso_l = (UINT32)IQS_IQ_Cal(ui_sharp_ratio * g_e_ctrl_addr[SenId_Value]->edge.ratio / 100, (g_edge_enh_addr[SenId_Value]+IQIdxL)->EnhN, 0, 1023, IQS_CAL_MULTIPLY);
	edge_enh_iso_h = (UINT32)IQS_IQ_Cal(ui_sharp_ratio * g_e_ctrl_addr[SenId_Value]->edge.ratio / 100, (g_edge_enh_addr[SenId_Value]+IQIdxH)->EnhN, 0, 1023, IQS_CAL_MULTIPLY);
    g_edge_enh_buf[SenId_Value].EnhN = IQS_Intpl(IsoValue, edge_enh_iso_l, edge_enh_iso_h, IsoStart, IsoEnd);

	//**  IPE-Edge Map
	g_ed_map_buf[SenId_Value] = *(g_ed_map_addr[SenId_Value]+IQIdxL);
	g_es_map_buf[SenId_Value] = *(g_es_map_addr[SenId_Value]+IQIdxL);

	g_ed_map_buf[SenId_Value].EthrL = IQS_Intpl(IsoValue, (g_ed_map_addr[SenId_Value]+IQIdxL)->EthrL, (g_ed_map_addr[SenId_Value]+IQIdxH)->EthrL, IsoStart, IsoEnd);
	g_ed_map_buf[SenId_Value].EthrH = IQS_Intpl(IsoValue, (g_ed_map_addr[SenId_Value]+IQIdxL)->EthrH, (g_ed_map_addr[SenId_Value]+IQIdxH)->EthrH, IsoStart, IsoEnd);
	g_ed_map_buf[SenId_Value].EtabL = IQS_Intpl(IsoValue, (g_ed_map_addr[SenId_Value]+IQIdxL)->EtabL, (g_ed_map_addr[SenId_Value]+IQIdxH)->EtabL, IsoStart, IsoEnd);
	g_ed_map_buf[SenId_Value].EtabH = IQS_Intpl(IsoValue, (g_ed_map_addr[SenId_Value]+IQIdxL)->EtabH, (g_ed_map_addr[SenId_Value]+IQIdxH)->EtabH, IsoStart, IsoEnd);
	g_es_map_buf[SenId_Value].EthrL = IQS_Intpl(IsoValue, (g_es_map_addr[SenId_Value]+IQIdxL)->EthrL, (g_es_map_addr[SenId_Value]+IQIdxH)->EthrL, IsoStart, IsoEnd);
	g_es_map_buf[SenId_Value].EthrH = IQS_Intpl(IsoValue, (g_es_map_addr[SenId_Value]+IQIdxL)->EthrH, (g_es_map_addr[SenId_Value]+IQIdxH)->EthrH, IsoStart, IsoEnd);
	g_es_map_buf[SenId_Value].EtabL = IQS_Intpl(IsoValue, (g_es_map_addr[SenId_Value]+IQIdxL)->EtabL, (g_es_map_addr[SenId_Value]+IQIdxH)->EtabL, IsoStart, IsoEnd);
	g_es_map_buf[SenId_Value].EtabH = IQS_Intpl(IsoValue, (g_es_map_addr[SenId_Value]+IQIdxL)->EtabH, (g_es_map_addr[SenId_Value]+IQIdxH)->EtabH, IsoStart, IsoEnd);
	IQS_IntplTblUint8(g_ed_tab_addr[SenId_Value]+IQIdxL*16,    g_ed_tab_addr[SenId_Value]+IQIdxH*16,      16, g_ed_tab_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTblUint8(g_es_tab_addr[SenId_Value]+IQIdxL*16,    g_es_tab_addr[SenId_Value]+IQIdxH*16,      16, g_es_tab_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

	//**  IPE-LPF
	g_lpf_buf[SenId_Value].R = *(g_lpf_addr[SenId_Value]+IQIdxL);

	g_lpf_buf[SenId_Value].R.lpfw      = IQS_Intpl(IsoValue, (g_lpf_addr[SenId_Value]+IQIdxL)->lpfw,      (g_lpf_addr[SenId_Value]+IQIdxH)->lpfw,        IsoStart, IsoEnd);
	g_lpf_buf[SenId_Value].R.sonlyw    = IQS_Intpl(IsoValue, (g_lpf_addr[SenId_Value]+IQIdxL)->sonlyw,    (g_lpf_addr[SenId_Value]+IQIdxH)->sonlyw,      IsoStart, IsoEnd);
	g_lpf_buf[SenId_Value].R.rangeth0  = IQS_Intpl(IsoValue, (g_lpf_addr[SenId_Value]+IQIdxL)->rangeth0,  (g_lpf_addr[SenId_Value]+IQIdxH)->rangeth0,    IsoStart, IsoEnd);
	g_lpf_buf[SenId_Value].R.rangeth1  = IQS_Intpl(IsoValue, (g_lpf_addr[SenId_Value]+IQIdxL)->rangeth1,  (g_lpf_addr[SenId_Value]+IQIdxH)->rangeth1,    IsoStart, IsoEnd);

	//**  IPE-CC
	IQS_IntplTblUint8(g_fs_tab_addr[SenId_Value]+IQIdxL*16,    g_fs_tab_addr[SenId_Value]+IQIdxH*16,      16, g_fs_tab_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTblUint8(g_fd_tab_addr[SenId_Value]+IQIdxL*16,    g_fd_tab_addr[SenId_Value]+IQIdxH*16,      16, g_fd_tab_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

    //**  IPE-CCtrl
    g_cctrl_info_buf[SenId_Value] = *(g_cctrl_info_addr[SenId_Value]+IQIdxL);

	sat_iso_l = (INT16)IQS_IQ_Cal(ui_sat_ratio * g_e_ctrl_addr[SenId_Value]->cctrl.sat_ratio * g_awb2sat_ratio_buf[SenId_Value] / 10000, *(g_saturation_addr[SenId_Value]+IQIdxL), -128, 127, IQS_CAL_INTPL);
	sat_iso_h = (INT16)IQS_IQ_Cal(ui_sat_ratio * g_e_ctrl_addr[SenId_Value]->cctrl.sat_ratio * g_awb2sat_ratio_buf[SenId_Value] / 10000, *(g_saturation_addr[SenId_Value]+IQIdxH), -128, 127, IQS_CAL_INTPL);
	g_saturation_buf[SenId_Value] = IQS_Intpl(IsoValue, sat_iso_l, sat_iso_h, IsoStart, IsoEnd);
	con_iso_l = (INT16)IQS_IQ_Cal(ui_con_ratio * g_e_ctrl_addr[SenId_Value]->cctrl.con_ratio / 100, *(g_contrast_addr[SenId_Value]+IQIdxL), -50, 50, IQS_CAL_INTPL);
	con_iso_h = (INT16)IQS_IQ_Cal(ui_con_ratio * g_e_ctrl_addr[SenId_Value]->cctrl.con_ratio / 100, *(g_contrast_addr[SenId_Value]+IQIdxH), -50, 50, IQS_CAL_INTPL);
	g_contrast_buf[SenId_Value] = IQS_Intpl(IsoValue, con_iso_l, con_iso_h, IsoStart, IsoEnd);
    g_cctrl_info_buf[SenId_Value].uiVdetDiv = IQS_Intpl(IsoValue, (g_cctrl_info_addr[SenId_Value]+IQIdxL)->uiVdetDiv, (g_cctrl_info_addr[SenId_Value]+IQIdxH)->uiVdetDiv, IsoStart, IsoEnd);
	g_cont2sat_adj_buf[SenId_Value] = (INT16)IQS_IQ_Cal(ui_con_ratio * g_e_ctrl_addr[SenId_Value]->cctrl.con_ratio / 100, 0, -18, 18, IQS_CAL_INTPL);

    //**  IPE-YCCon
    IQS_IntplTbl(g_ccon_tab_addr[SenId_Value]+IQIdxL*17,    g_ccon_tab_addr[SenId_Value]+IQIdxH*17,      17, g_ccon_tab_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);

	//***********
	//** IFE2  **
	//***********
	//**  IFE2-ReferenceCenter
	g_ref_center_y_buf[SenId_Value] = *(g_ref_center_y_addr[SenId_Value]+IQIdxL);
	g_ref_center_uv_buf[SenId_Value] = *(g_ref_center_uv_addr[SenId_Value]+IQIdxL);

	IQS_IntplTbl(g_ref_center_y_th_addr[SenId_Value]+IQIdxL*3,  g_ref_center_y_th_addr[SenId_Value]+IQIdxH*3,   3, g_ref_center_y_th_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_ref_center_y_wt_addr[SenId_Value]+IQIdxL*4,  g_ref_center_y_wt_addr[SenId_Value]+IQIdxH*4,   4, g_ref_center_y_wt_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	g_ref_center_y_buf[SenId_Value].uiCntWt = IQS_Intpl(IsoValue,    (g_ref_center_y_addr[SenId_Value]+IQIdxL)->uiCntWt,  (g_ref_center_y_addr[SenId_Value]+IQIdxH)->uiCntWt, IsoStart, IsoEnd);
	g_ref_center_y_buf[SenId_Value].uiOutlDth = IQS_Intpl(IsoValue,    (g_ref_center_y_addr[SenId_Value]+IQIdxL)->uiOutlDth,  (g_ref_center_y_addr[SenId_Value]+IQIdxH)->uiOutlDth, IsoStart, IsoEnd);
	g_ref_center_y_buf[SenId_Value].uiOutlTh = IQS_Intpl(IsoValue,    (g_ref_center_y_addr[SenId_Value]+IQIdxL)->uiOutlTh,  (g_ref_center_y_addr[SenId_Value]+IQIdxH)->uiOutlTh, IsoStart, IsoEnd);
	IQS_IntplTbl(g_ref_center_uv_th_addr[SenId_Value]+IQIdxL*3, g_ref_center_uv_th_addr[SenId_Value]+IQIdxH*3,  3, g_ref_center_uv_th_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_ref_center_uv_wt_addr[SenId_Value]+IQIdxL*4, g_ref_center_uv_wt_addr[SenId_Value]+IQIdxH*4,  4, g_ref_center_uv_wt_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	g_ref_center_uv_buf[SenId_Value].uiCntWt = IQS_Intpl(IsoValue,   (g_ref_center_uv_addr[SenId_Value]+IQIdxL)->uiCntWt, (g_ref_center_uv_addr[SenId_Value]+IQIdxH)->uiCntWt, IsoStart, IsoEnd);
	g_ref_center_uv_buf[SenId_Value].uiOutlDth = IQS_Intpl(IsoValue,   (g_ref_center_uv_addr[SenId_Value]+IQIdxL)->uiOutlDth, (g_ref_center_uv_addr[SenId_Value]+IQIdxH)->uiOutlDth, IsoStart, IsoEnd);
	g_ref_center_uv_buf[SenId_Value].uiOutlTh = IQS_Intpl(IsoValue,   (g_ref_center_uv_addr[SenId_Value]+IQIdxL)->uiOutlTh, (g_ref_center_uv_addr[SenId_Value]+IQIdxH)->uiOutlTh, IsoStart, IsoEnd);

	//**  IFE2-Filter
	g_ife2filter_buf[SenId_Value] = *(g_ife2filter_addr[SenId_Value]+IQIdxL);

	IQS_IntplTbl(g_ife2filter_y_th_addr[SenId_Value]+IQIdxL*5, g_ife2filter_y_th_addr[SenId_Value]+IQIdxH*5,  5, g_ife2filter_y_th_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_ife2filter_y_wt_addr[SenId_Value]+IQIdxL*6, g_ife2filter_y_wt_addr[SenId_Value]+IQIdxH*6,  6, g_ife2filter_y_wt_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_ife2filter_uv_th_addr[SenId_Value]+IQIdxL*5,g_ife2filter_uv_th_addr[SenId_Value]+IQIdxH*5, 5, g_ife2filter_uv_th_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_ife2filter_uv_wt_addr[SenId_Value]+IQIdxL*6,g_ife2filter_uv_wt_addr[SenId_Value]+IQIdxH*6, 6, g_ife2filter_uv_wt_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	g_ife2filter_buf[SenId_Value].Filter.FiltEdth.uiEdthHV = IQS_Intpl(IsoValue,   (g_ife2filter_addr[SenId_Value]+IQIdxL)->Filter.FiltEdth.uiEdthHV, (g_ife2filter_addr[SenId_Value]+IQIdxH)->Filter.FiltEdth.uiEdthHV, IsoStart, IsoEnd);
	g_ife2filter_buf[SenId_Value].Filter.FiltEdth.uiEdthPN = IQS_Intpl(IsoValue,   (g_ife2filter_addr[SenId_Value]+IQIdxL)->Filter.FiltEdth.uiEdthPN, (g_ife2filter_addr[SenId_Value]+IQIdxH)->Filter.FiltEdth.uiEdthPN, IsoStart, IsoEnd);

	//**  IFE2-Gray
	g_gray_statical_buf[SenId_Value] = *(g_gray_statical_addr[SenId_Value]+IQIdxL);

	g_gray_statical_buf[SenId_Value].uiUTh0 = IQS_Intpl(IsoValue,   (g_gray_statical_addr[SenId_Value]+IQIdxL)->uiUTh0, (g_gray_statical_addr[SenId_Value]+IQIdxH)->uiUTh0, IsoStart, IsoEnd);
	g_gray_statical_buf[SenId_Value].uiUTh1 = IQS_Intpl(IsoValue,   (g_gray_statical_addr[SenId_Value]+IQIdxL)->uiUTh1, (g_gray_statical_addr[SenId_Value]+IQIdxH)->uiUTh1, IsoStart, IsoEnd);
	g_gray_statical_buf[SenId_Value].uiVTh0 = IQS_Intpl(IsoValue,   (g_gray_statical_addr[SenId_Value]+IQIdxL)->uiVTh0, (g_gray_statical_addr[SenId_Value]+IQIdxH)->uiVTh0, IsoStart, IsoEnd);
	g_gray_statical_buf[SenId_Value].uiVTh1 = IQS_Intpl(IsoValue,   (g_gray_statical_addr[SenId_Value]+IQIdxL)->uiVTh1, (g_gray_statical_addr[SenId_Value]+IQIdxH)->uiVTh1, IsoStart, IsoEnd);

	//***********
	//**  IME  **
	//***********
	//**  IME-LCA
	g_chroma_adapt_buf[SenId_Value] = *(g_chroma_adapt_addr[SenId_Value]+IQIdxL);
	g_chroma_adapt_lum_buf[SenId_Value] = *(g_chroma_adapt_lum_addr[SenId_Value]+IQIdxL);
	g_chroma_adapt_color_buf[SenId_Value] = *(g_chroma_adapt_color_addr[SenId_Value]+IQIdxL);

	UINT32 TwoPower[5] = {1, 2, 4, 8, 16};
	g_chroma_adapt_buf[SenId_Value].LcaRefWt.LcaRefY       = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaRefWt.LcaRefY,     (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaRefWt.LcaRefY,       IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaRefWt.LcaRefUV      = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaRefWt.LcaRefUV,    (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaRefWt.LcaRefUV,      IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaRefWt.LcaOutUV      = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaRefWt.LcaOutUV,    (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaRefWt.LcaOutUV,      IsoStart, IsoEnd);

	g_chroma_adapt_buf[SenId_Value].LcaYinfo.LcaY          = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaYinfo.LcaY,        (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaYinfo.LcaY,          IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaYinfo.LcaYTh        = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaYinfo.LcaYTh,      (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaYinfo.LcaYTh,        IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaYinfo.LcaYWtPrc     = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaYinfo.LcaYWtPrc,   (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaYinfo.LcaYWtPrc,     IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaYinfo.LcaYWtS       = 8 * TwoPower[g_chroma_adapt_buf[SenId_Value].LcaYinfo.LcaYWtPrc];
	g_chroma_adapt_buf[SenId_Value].LcaYinfo.LcaYWtE       = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaYinfo.LcaYWtE,     (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaYinfo.LcaYWtE,       IsoStart, IsoEnd);

	g_chroma_adapt_buf[SenId_Value].LcaUVinfo.LcaUV        = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaUVinfo.LcaUV,      (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaUVinfo.LcaUV,        IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaUVinfo.LcaUVTh      = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaUVinfo.LcaUVTh,    (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaUVinfo.LcaUVTh,      IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaUVinfo.LcaUVWtPrc   = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaUVinfo.LcaUVWtPrc, (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaUVinfo.LcaUVWtPrc,   IsoStart, IsoEnd);
	g_chroma_adapt_buf[SenId_Value].LcaUVinfo.LcaUVWtS     = 8 * TwoPower[g_chroma_adapt_buf[SenId_Value].LcaUVinfo.LcaUVWtPrc];
	g_chroma_adapt_buf[SenId_Value].LcaUVinfo.LcaUVWtE     = IQS_Intpl(IsoValue, (g_chroma_adapt_addr[SenId_Value]+IQIdxL)->LcaUVinfo.LcaUVWtE,   (g_chroma_adapt_addr[SenId_Value]+IQIdxH)->LcaUVinfo.LcaUVWtE,     IsoStart, IsoEnd);

	//**  IME-ChromaSuppression
	g_chroma_supp_buf[SenId_Value] = *(g_chroma_supp_addr[SenId_Value]+IQIdxL);

	IQS_IntplTbl(g_chroma_supp_w_y_addr[SenId_Value]+IQIdxL*16,  g_chroma_supp_w_y_addr[SenId_Value]+IQIdxH*16,   16, g_chroma_supp_w_y_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	IQS_IntplTbl(g_chroma_supp_w_c_addr[SenId_Value]+IQIdxL*16,  g_chroma_supp_w_c_addr[SenId_Value]+IQIdxH*16,   16, g_chroma_supp_w_c_buf[SenId_Value], IsoValue, IsoStart, IsoEnd);
	//DBG_DUMP("Supp_Y:%d,%d,%d\r\n",g_chroma_supp_w_y_buf[SenId_Value][0],g_chroma_supp_w_y_buf[SenId_Value][1],g_chroma_supp_w_y_buf[SenId_Value][2]);
	//DBG_DUMP("Supp_C:%d,%d,%d\r\n",g_chroma_supp_w_c_buf[SenId_Value][0],g_chroma_supp_w_c_buf[SenId_Value][1],g_chroma_supp_w_c_buf[SenId_Value][2]);

    //**  IME-TMNR
    g_tmnr_info_buf[SenId_Value] = **(g_tmnr_info_addr[SenId_Value]+IQIdxL_adj);

    //Interpolation by ISO
    tmnr_info_buf_l = **(g_tmnr_info_addr[SenId_Value]+IQIdxL_adj);
    tmnr_info_buf_h = **(g_tmnr_info_addr[SenId_Value]+IQIdxH_adj);
    g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThY1 = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.MatchLevelTh.MaLvThY1, tmnr_info_buf_h.MatchLevelTh.MaLvThY1, IsoStart_adj, IsoEnd_adj);
    g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThY2 = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.MatchLevelTh.MaLvThY2, tmnr_info_buf_h.MatchLevelTh.MaLvThY2, IsoStart_adj, IsoEnd_adj);
    g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThC1 = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.MatchLevelTh.MaLvThC1, tmnr_info_buf_h.MatchLevelTh.MaLvThC1, IsoStart_adj, IsoEnd_adj);
    g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThC2 = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.MatchLevelTh.MaLvThC2, tmnr_info_buf_h.MatchLevelTh.MaLvThC2, IsoStart_adj, IsoEnd_adj);
    g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DY = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.nrsth_Tpl3DY, tmnr_info_buf_h.nrsth_Tpl3DY, IsoStart_adj, IsoEnd_adj);
	g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DY = IQ_CLAMP(g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DY + (g_e_ctrl_addr[SenId_Value]->tnr.level - 5), 0, 32);
    g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DC = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.nrsth_Tpl3DC, tmnr_info_buf_h.nrsth_Tpl3DC, IsoStart_adj, IsoEnd_adj);
	g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DC = IQ_CLAMP(g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DC + (g_e_ctrl_addr[SenId_Value]->tnr.level - 5), 0, 32);
    g_tmnr_info_buf[SenId_Value].nrsth_Spl2DY = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.nrsth_Spl2DY, tmnr_info_buf_h.nrsth_Spl2DY, IsoStart_adj, IsoEnd_adj);
    g_tmnr_info_buf[SenId_Value].nrsth_Spl2DC = IQS_Intpl(IsoValue_adj, tmnr_info_buf_l.nrsth_Spl2DC, tmnr_info_buf_h.nrsth_Spl2DC, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl((UINT32*)tmnr_info_buf_l.NoiseModel.TmnrY, (UINT32*)tmnr_info_buf_h.NoiseModel.TmnrY, 32, (UINT32*)g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl((UINT32*)tmnr_info_buf_l.NoiseModel.TmnrU, (UINT32*)tmnr_info_buf_h.NoiseModel.TmnrU, 16, (UINT32*)g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl((UINT32*)tmnr_info_buf_l.NoiseModel.TmnrV, (UINT32*)tmnr_info_buf_h.NoiseModel.TmnrV, 16, (UINT32*)g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl(tmnr_info_buf_l.Ftr2DThY, tmnr_info_buf_h.Ftr2DThY, 4, g_tmnr_info_buf[SenId_Value].Ftr2DThY, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl(tmnr_info_buf_l.Ftr3D1ThY, tmnr_info_buf_h.Ftr3D1ThY, 4, g_tmnr_info_buf[SenId_Value].Ftr3D1ThY, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl(tmnr_info_buf_l.Ftr3D2ThY, tmnr_info_buf_h.Ftr3D2ThY, 4, g_tmnr_info_buf[SenId_Value].Ftr3D2ThY, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl(tmnr_info_buf_l.Ftr2DThC, tmnr_info_buf_h.Ftr2DThC, 4, g_tmnr_info_buf[SenId_Value].Ftr2DThC, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    IQS_IntplTbl(tmnr_info_buf_l.Ftr3DThC, tmnr_info_buf_h.Ftr3DThC, 4, g_tmnr_info_buf[SenId_Value].Ftr3DThC, IsoValue_adj, IsoStart_adj, IsoEnd_adj);
    //DBG_DUMP("^G TMNR nrsth = %3d, %3d\r\n",g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DY,g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DC);

    if (0) {
        static UINT32  fps = 0;
        if (fps == 0) {
            fps = 60;
            debug_msg("~B ori IsoValue = %d, IQIdxL = %d, IQIdxH = %d, IsoStart = %d, IsoEnd = %d \r\n",IsoValue,IQIdxL,IQIdxH,IsoStart,IsoEnd);
            debug_msg("~G adj IsoValue = %d, IQIdxL = %d, IQIdxH = %d, IsoStart = %d, IsoEnd = %d \r\n",IsoValue_adj,IQIdxL_adj,IQIdxH_adj,IsoStart_adj,IsoEnd_adj);
            //debug_msg("^G MatchLV = %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThY1,g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThY2,g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThC1,g_tmnr_info_buf[SenId_Value].MatchLevelTh.MaLvThC2);
            //debug_msg("^G nrsth   = %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DY,g_tmnr_info_buf[SenId_Value].nrsth_Tpl3DC,g_tmnr_info_buf[SenId_Value].nrsth_Spl2DY,g_tmnr_info_buf[SenId_Value].nrsth_Spl2DC);

            //debug_msg("~G Y base =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[0].uiYBase,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[1].uiYBase,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[2].uiYBase,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[3].uiYBase,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[4].uiYBase,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[5].uiYBase,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[6].uiYBase,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[7].uiYBase);
            //debug_msg("^G Y std  =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[0].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[1].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[2].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[3].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[4].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[5].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[6].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[7].uiSTD);
            //debug_msg("~G Y coeA =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[0].uiCoeffA,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[1].uiCoeffA,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[2].uiCoeffA,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[3].uiCoeffA,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[4].uiCoeffA,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[5].uiCoeffA,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[6].uiCoeffA,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[7].uiCoeffA);
            //debug_msg("^G Y coeB =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[0].uiCoeffB,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[1].uiCoeffB,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[2].uiCoeffB,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[3].uiCoeffB,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[4].uiCoeffB,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[5].uiCoeffB,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[6].uiCoeffB,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrY[7].uiCoeffB);

            //debug_msg("^G U mean =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[0].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[1].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[2].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[3].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[4].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[5].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[6].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[7].uiMean);
            //debug_msg("^G U std  =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[0].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[1].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[2].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[3].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[4].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[5].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[6].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrU[7].uiSTD);
            //debug_msg("~G V mean =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[0].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[1].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[2].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[3].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[4].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[5].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[6].uiMean,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[7].uiMean);
            //debug_msg("~G V std  =  %3d, %3d, %3d, %3d, %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[0].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[1].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[2].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[3].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[4].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[5].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[6].uiSTD,g_tmnr_info_buf[SenId_Value].NoiseModel.TmnrV[7].uiSTD);
            //debug_msg("^G 2DThY  =  %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].Ftr2DThY[0],g_tmnr_info_buf[SenId_Value].Ftr2DThY[1],g_tmnr_info_buf[SenId_Value].Ftr2DThY[2],g_tmnr_info_buf[SenId_Value].Ftr2DThY[3]);
            //debug_msg("^G 3D1ThY =  %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].Ftr3D1ThY[0],g_tmnr_info_buf[SenId_Value].Ftr3D1ThY[1],g_tmnr_info_buf[SenId_Value].Ftr3D1ThY[2],g_tmnr_info_buf[SenId_Value].Ftr3D1ThY[3]);
            //debug_msg("^G 3D2ThY =  %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].Ftr3D2ThY[0],g_tmnr_info_buf[SenId_Value].Ftr3D2ThY[1],g_tmnr_info_buf[SenId_Value].Ftr3D2ThY[2],g_tmnr_info_buf[SenId_Value].Ftr3D2ThY[3]);
            //debug_msg("^G 2DThC  =  %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].Ftr2DThC[0],g_tmnr_info_buf[SenId_Value].Ftr2DThC[1],g_tmnr_info_buf[SenId_Value].Ftr2DThC[2],g_tmnr_info_buf[SenId_Value].Ftr2DThC[3]);
            //debug_msg("^G 3DThC  =  %3d, %3d, %3d, %3d \r\n",g_tmnr_info_buf[SenId_Value].Ftr3DThC[0],g_tmnr_info_buf[SenId_Value].Ftr3DThC[1],g_tmnr_info_buf[SenId_Value].Ftr3DThC[2],g_tmnr_info_buf[SenId_Value].Ftr3DThC[3]);
            debug_msg("\r\n");

        }else {
            fps--;
        }
    }
}
