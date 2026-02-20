add_library(machine)
target_sources(machine PRIVATE
    src/m_Do/m_Do_main.cpp
    src/m_Do/m_Do_audio.cpp
    src/m_Do/m_Do_controller_pad.cpp
    src/m_Do/m_Do_graphic.cpp
    src/m_Do/m_Do_machine.cpp
    src/m_Do/m_Do_mtx.cpp
    src/m_Do/m_Do_ext.cpp
    src/m_Do/m_Do_lib.cpp
    src/m_Do/m_Do_Reset.cpp
    src/m_Do/m_Do_dvd_thread.cpp
    src/m_Do/m_Do_DVDError.cpp
    src/m_Do/m_Do_MemCard.cpp
    src/m_Do/m_Do_MemCardRWmng.cpp
    src/m_Do/m_Do_machine_exception.cpp
)
target_include_directories(machine PRIVATE src/)
target_include_directories(machine SYSTEM PRIVATE include/)
target_include_directories(machine SYSTEM PRIVATE include/dolphin/)
target_include_directories(machine SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(machine SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE machine)
add_library(c)
target_sources(c PRIVATE
    src/c/c_damagereaction.cpp
    src/c/c_dylink.cpp
)
target_include_directories(c PRIVATE src/)
target_include_directories(c SYSTEM PRIVATE include/)
target_include_directories(c SYSTEM PRIVATE include/dolphin/)
target_include_directories(c SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(c SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE c)
add_library(framework)
target_sources(framework PRIVATE
    src/f_ap/f_ap_game.cpp
    src/f_op/f_op_actor.cpp
    src/f_op/f_op_actor_iter.cpp
    src/f_op/f_op_actor_tag.cpp
    src/f_op/f_op_camera.cpp
    src/f_op/f_op_actor_map.cpp
    src/f_op/f_op_actor_mng.cpp
    src/f_op/f_op_camera_mng.cpp
    src/f_op/f_op_overlap.cpp
    src/f_op/f_op_overlap_mng.cpp
    src/f_op/f_op_overlap_req.cpp
    src/f_op/f_op_scene.cpp
    src/f_op/f_op_scene_iter.cpp
    src/f_op/f_op_scene_mng.cpp
    src/f_op/f_op_scene_req.cpp
    src/f_op/f_op_scene_tag.cpp
    src/f_op/f_op_view.cpp
    src/f_op/f_op_kankyo.cpp
    src/f_op/f_op_msg.cpp
    src/f_op/f_op_kankyo_mng.cpp
    src/f_op/f_op_msg_mng.cpp
    src/f_op/f_op_draw_iter.cpp
    src/f_op/f_op_draw_tag.cpp
    src/f_op/f_op_scene_pause.cpp
    src/f_pc/f_pc_base.cpp
    src/f_pc/f_pc_create_iter.cpp
    src/f_pc/f_pc_create_req.cpp
    src/f_pc/f_pc_create_tag.cpp
    src/f_pc/f_pc_creator.cpp
    src/f_pc/f_pc_delete_tag.cpp
    src/f_pc/f_pc_deletor.cpp
    src/f_pc/f_pc_draw_priority.cpp
    src/f_pc/f_pc_executor.cpp
    src/f_pc/f_pc_layer.cpp
    src/f_pc/f_pc_leaf.cpp
    src/f_pc/f_pc_layer_iter.cpp
    src/f_pc/f_pc_layer_tag.cpp
    src/f_pc/f_pc_line.cpp
    src/f_pc/f_pc_load.cpp
    src/f_pc/f_pc_manager.cpp
    src/f_pc/f_pc_method.cpp
    src/f_pc/f_pc_node.cpp
    src/f_pc/f_pc_node_req.cpp
    src/f_pc/f_pc_priority.cpp
    src/f_pc/f_pc_profile.cpp
    src/f_pc/f_pc_searcher.cpp
    src/f_pc/f_pc_line_tag.cpp
    src/f_pc/f_pc_line_iter.cpp
    src/f_pc/f_pc_method_iter.cpp
    src/f_pc/f_pc_method_tag.cpp
    src/f_pc/f_pc_pause.cpp
    src/f_pc/f_pc_draw.cpp
    src/f_pc/f_pc_fstcreate_req.cpp
    src/f_pc/f_pc_stdcreate_req.cpp
)
target_include_directories(framework PRIVATE src/)
target_include_directories(framework SYSTEM PRIVATE include/)
target_include_directories(framework SYSTEM PRIVATE include/dolphin/)
target_include_directories(framework SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(framework SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE framework)
add_library(dolzel2)
target_sources(dolzel2 PRIVATE
    src/d/d_stage.cpp
    src/d/d_map.cpp
    src/d/d_com_inf_game.cpp
    src/d/d_com_static.cpp
    src/d/d_com_inf_actor.cpp
    src/d/d_bomb.cpp
    src/d/d_lib.cpp
    src/d/d_save.cpp
    src/d/d_save_init.cpp
    src/d/d_jnt_col.cpp
    src/d/d_a_obj.cpp
    src/d/d_a_itembase_static.cpp
    src/d/d_a_item_static.cpp
    src/d/d_a_shop_item_static.cpp
    src/d/d_a_horse_static.cpp
    src/d/d_demo.cpp
    src/d/d_door_param2.cpp
    src/d/d_resorce.cpp
    src/d/d_map_path.cpp
    src/d/d_map_path_fmap.cpp
    src/d/d_map_path_dmap.cpp
    src/d/d_event.cpp
    src/d/d_event_data.cpp
    src/d/d_event_manager.cpp
    src/d/d_event_lib.cpp
    src/d/d_event_debug.cpp
    src/d/d_simple_model.cpp
    src/d/d_particle.cpp
    src/d/d_particle_name.cpp
    src/d/d_particle_copoly.cpp
    src/d/d_path.cpp
    src/d/d_drawlist.cpp
    src/d/d_kankyo_data.cpp
    src/d/d_kankyo_wether.cpp
    src/d/d_kankyo_rain.cpp
    src/d/d_vibration.cpp
    src/d/d_vib_pattern.cpp
    src/d/d_attention.cpp
    src/d/d_bg_pc.cpp
    src/d/d_att_dist.cpp
    src/d/d_bg_plc.cpp
    src/d/d_bg_s.cpp
    src/d/d_bg_s_acch.cpp
    src/d/d_bg_s_chk.cpp
    src/d/d_bg_s_gnd_chk.cpp
    src/d/d_bg_s_grp_pass_chk.cpp
    src/d/d_bg_s_lin_chk.cpp
    src/d/d_bg_s_movebg_actor.cpp
    src/d/d_bg_s_sph_chk.cpp
    src/d/d_bg_s_spl_grp_chk.cpp
    src/d/d_bg_s_poly_pass_chk.cpp
    src/d/d_bg_s_roof_chk.cpp
    src/d/d_bg_s_wtr_chk.cpp
    src/d/d_bg_w.cpp
    src/d/d_bg_w_base.cpp
    src/d/d_bg_w_kcol.cpp
    src/d/d_bg_w_sv.cpp
    src/d/d_cc_d.cpp
    src/d/d_cc_mass_s.cpp
    src/d/d_cc_s.cpp
    src/d/d_cc_uty.cpp
    src/d/d_cam_param.cpp
    src/d/d_ev_camera.cpp
    src/d/d_spline_path.cpp
    src/d/d_item_data.cpp
    src/d/d_item.cpp
    src/d/d_tresure.cpp
    src/d/d_model.cpp
    src/d/d_eye_hl.cpp
    src/d/d_error_msg.cpp
    src/d/d_debug_viewer.cpp
    src/d/actor/d_a_alink.cpp
    src/d/actor/d_a_itembase.cpp
    src/d/actor/d_a_no_chg_room.cpp
    src/d/actor/d_a_npc.cpp
    src/d/actor/d_a_npc_cd.cpp
    src/d/actor/d_a_npc_cd2.cpp
    src/d/actor/d_a_obj_item.cpp
    src/d/d_insect.cpp
    src/d/actor/d_a_obj_ss_base.cpp
    src/d/actor/d_a_player.cpp
    src/d/d_camera.cpp
    src/d/d_envse.cpp
    src/d/d_file_select.cpp
    src/d/d_file_sel_warning.cpp
    src/d/d_file_sel_info.cpp
    src/d/d_bright_check.cpp
    src/d/d_scope.cpp
    src/d/d_select_cursor.cpp
    src/d/d_select_icon.cpp
    src/d/d_shop_camera.cpp
    src/d/d_shop_item_ctrl.cpp
    src/d/d_shop_system.cpp
    src/d/d_gameover.cpp
    src/d/d_kankyo.cpp
    src/d/d_kyeff.cpp
    src/d/d_kyeff2.cpp
    src/d/d_ky_thunder.cpp
    src/d/d_kantera_icon_meter.cpp
    src/d/d_menu_calibration.cpp
    src/d/d_menu_collect.cpp
    src/d/d_menu_dmap.cpp
    src/d/d_menu_dmap_map.cpp
    src/d/d_menu_map_common.cpp
    src/d/d_menu_fishing.cpp
    src/d/d_menu_fmap.cpp
    src/d/d_menu_fmap_map.cpp
    src/d/d_menu_fmap2D.cpp
    src/d/d_menu_insect.cpp
    src/d/d_menu_item_explain.cpp
    src/d/d_menu_letter.cpp
    src/d/d_menu_option.cpp
    src/d/d_menu_ring.cpp
    src/d/d_menu_save.cpp
    src/d/d_menu_skill.cpp
    src/d/d_menu_window_HIO.cpp
    src/d/d_menu_window.cpp
    src/d/d_meter_HIO.cpp
    src/d/d_meter_button.cpp
    src/d/d_meter_haihai.cpp
    src/d/d_meter_hakusha.cpp
    src/d/d_meter_map.cpp
    src/d/d_meter_string.cpp
    src/d/d_meter2_draw.cpp
    src/d/d_meter2_info.cpp
    src/d/d_meter2.cpp
    src/d/d_msg_out_font.cpp
    src/d/d_msg_class.cpp
    src/d/d_msg_object.cpp
    src/d/d_msg_unit.cpp
    src/d/d_msg_scrn_3select.cpp
    src/d/d_msg_scrn_arrow.cpp
    src/d/d_msg_scrn_base.cpp
    src/d/d_msg_scrn_boss.cpp
    src/d/d_msg_scrn_explain.cpp
    src/d/d_msg_scrn_item.cpp
    src/d/d_msg_scrn_howl.cpp
    src/d/d_msg_scrn_jimaku.cpp
    src/d/d_msg_scrn_kanban.cpp
    src/d/d_msg_scrn_light.cpp
    src/d/d_msg_scrn_place.cpp
    src/d/d_msg_scrn_staff.cpp
    src/d/d_msg_scrn_talk.cpp
    src/d/d_msg_scrn_tree.cpp
    src/d/d_msg_string_base.cpp
    src/d/d_msg_string.cpp
    src/d/d_msg_flow.cpp
    src/d/d_name.cpp
    src/d/d_npc_lib.cpp
    src/d/d_ovlp_fade.cpp
    src/d/d_ovlp_fade2.cpp
    src/d/d_ovlp_fade3.cpp
    src/d/d_pane_class.cpp
    src/d/d_pane_class_alpha.cpp
    src/d/d_pane_class_ex.cpp
    src/d/d_s_logo.cpp
    src/d/d_s_menu.cpp
    src/d/d_s_name.cpp
    src/d/d_s_play.cpp
    src/d/d_s_room.cpp
    src/d/d_s_title.cpp
    src/d/d_save_HIO.cpp
    src/d/d_timer.cpp
    src/d/d_k_wmark.cpp
    src/d/d_k_wpillar.cpp
)
target_include_directories(dolzel2 PRIVATE src/)
target_include_directories(dolzel2 SYSTEM PRIVATE include/)
target_include_directories(dolzel2 SYSTEM PRIVATE include/dolphin/)
target_include_directories(dolzel2 SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(dolzel2 SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE dolzel2)
add_library(DynamicLink)
target_sources(DynamicLink PRIVATE
    src/DynamicLink.cpp
)
target_include_directories(DynamicLink PRIVATE src/)
target_include_directories(DynamicLink SYSTEM PRIVATE include/)
target_include_directories(DynamicLink SYSTEM PRIVATE include/dolphin/)
target_include_directories(DynamicLink SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(DynamicLink SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE DynamicLink)
add_library(SSystem)
target_sources(SSystem PRIVATE
    src/SSystem/SComponent/c_malloc.cpp
    src/SSystem/SComponent/c_API.cpp
    src/SSystem/SComponent/c_API_controller_pad.cpp
    src/SSystem/SComponent/c_API_graphic.cpp
    src/SSystem/SComponent/c_cc_d.cpp
    src/SSystem/SComponent/c_cc_s.cpp
    src/SSystem/SComponent/c_counter.cpp
    src/SSystem/SComponent/c_list.cpp
    src/SSystem/SComponent/c_list_iter.cpp
    src/SSystem/SComponent/c_node.cpp
    src/SSystem/SComponent/c_node_iter.cpp
    src/SSystem/SComponent/c_tree.cpp
    src/SSystem/SComponent/c_tree_iter.cpp
    src/SSystem/SComponent/c_phase.cpp
    src/SSystem/SComponent/c_request.cpp
    src/SSystem/SComponent/c_tag.cpp
    src/SSystem/SComponent/c_tag_iter.cpp
    src/SSystem/SComponent/c_xyz.cpp
    src/SSystem/SComponent/c_sxyz.cpp
    src/SSystem/SComponent/c_math.cpp
    src/SSystem/SComponent/c_bg_s_chk.cpp
    src/SSystem/SComponent/c_bg_s_gnd_chk.cpp
    src/SSystem/SComponent/c_bg_s_lin_chk.cpp
    src/SSystem/SComponent/c_bg_s_shdw_draw.cpp
    src/SSystem/SComponent/c_bg_s_poly_info.cpp
    src/SSystem/SComponent/c_bg_w.cpp
    src/SSystem/SComponent/c_m2d.cpp
    src/SSystem/SComponent/c_m3d.cpp
    src/SSystem/SComponent/c_m3d_g_aab.cpp
    src/SSystem/SComponent/c_m3d_g_cir.cpp
    src/SSystem/SComponent/c_m3d_g_cps.cpp
    src/SSystem/SComponent/c_m3d_g_cyl.cpp
    src/SSystem/SComponent/c_m3d_g_lin.cpp
    src/SSystem/SComponent/c_m3d_g_pla.cpp
    src/SSystem/SComponent/c_m3d_g_sph.cpp
    src/SSystem/SComponent/c_m3d_g_tri.cpp
    src/SSystem/SComponent/c_lib.cpp
    src/SSystem/SComponent/c_angle.cpp
    src/SSystem/SStandard/s_basic.cpp
)
target_include_directories(SSystem PRIVATE src/)
target_include_directories(SSystem SYSTEM PRIVATE include/)
target_include_directories(SSystem SYSTEM PRIVATE include/dolphin/)
target_include_directories(SSystem SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(SSystem SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE SSystem)
add_library(JFramework)
target_sources(JFramework PRIVATE
    src/JSystem/JFramework/JFWSystem.cpp
    src/JSystem/JFramework/JFWDisplay.cpp
)
target_include_directories(JFramework PRIVATE src/)
target_include_directories(JFramework SYSTEM PRIVATE include/)
target_include_directories(JFramework SYSTEM PRIVATE include/dolphin/)
target_include_directories(JFramework SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JFramework SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JFramework)
add_library(J3DU)
target_sources(J3DU PRIVATE
    src/JSystem/J3DU/J3DUClipper.cpp
    src/JSystem/J3DU/J3DUDL.cpp
)
target_include_directories(J3DU PRIVATE src/)
target_include_directories(J3DU SYSTEM PRIVATE include/)
target_include_directories(J3DU SYSTEM PRIVATE include/dolphin/)
target_include_directories(J3DU SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(J3DU SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE J3DU)
add_library(JParticle)
target_sources(JParticle PRIVATE
    src/JSystem/JParticle/JPAResourceManager.cpp
    src/JSystem/JParticle/JPAResource.cpp
    src/JSystem/JParticle/JPABaseShape.cpp
    src/JSystem/JParticle/JPAExtraShape.cpp
    src/JSystem/JParticle/JPAChildShape.cpp
    src/JSystem/JParticle/JPAExTexShape.cpp
    src/JSystem/JParticle/JPADynamicsBlock.cpp
    src/JSystem/JParticle/JPAFieldBlock.cpp
    src/JSystem/JParticle/JPAKeyBlock.cpp
    src/JSystem/JParticle/JPATexture.cpp
    src/JSystem/JParticle/JPAResourceLoader.cpp
    src/JSystem/JParticle/JPAEmitterManager.cpp
    src/JSystem/JParticle/JPAEmitter.cpp
    src/JSystem/JParticle/JPAParticle.cpp
    src/JSystem/JParticle/JPAMath.cpp
)
target_include_directories(JParticle PRIVATE src/)
target_include_directories(JParticle SYSTEM PRIVATE include/)
target_include_directories(JParticle SYSTEM PRIVATE include/dolphin/)
target_include_directories(JParticle SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JParticle SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JParticle)
add_library(JStage)
target_sources(JStage PRIVATE
    src/JSystem/JStage/JSGActor.cpp
    src/JSystem/JStage/JSGAmbientLight.cpp
    src/JSystem/JStage/JSGCamera.cpp
    src/JSystem/JStage/JSGFog.cpp
    src/JSystem/JStage/JSGLight.cpp
    src/JSystem/JStage/JSGObject.cpp
    src/JSystem/JStage/JSGSystem.cpp
)
target_include_directories(JStage PRIVATE src/)
target_include_directories(JStage SYSTEM PRIVATE include/)
target_include_directories(JStage SYSTEM PRIVATE include/dolphin/)
target_include_directories(JStage SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JStage SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JStage)
add_library(JStudio)
target_sources(JStudio PRIVATE
    src/JSystem/JStudio/JStudio/ctb.cpp
    src/JSystem/JStudio/JStudio/ctb-data.cpp
    src/JSystem/JStudio/JStudio/functionvalue.cpp
    src/JSystem/JStudio/JStudio/fvb.cpp
    src/JSystem/JStudio/JStudio/fvb-data.cpp
    src/JSystem/JStudio/JStudio/fvb-data-parse.cpp
    src/JSystem/JStudio/JStudio/jstudio-control.cpp
    src/JSystem/JStudio/JStudio/jstudio-data.cpp
    src/JSystem/JStudio/JStudio/jstudio-math.cpp
    src/JSystem/JStudio/JStudio/jstudio-object.cpp
    src/JSystem/JStudio/JStudio/object-id.cpp
    src/JSystem/JStudio/JStudio/stb.cpp
    src/JSystem/JStudio/JStudio/stb-data-parse.cpp
    src/JSystem/JStudio/JStudio/stb-data.cpp
)
target_include_directories(JStudio PRIVATE src/)
target_include_directories(JStudio SYSTEM PRIVATE include/)
target_include_directories(JStudio SYSTEM PRIVATE include/dolphin/)
target_include_directories(JStudio SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JStudio SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JStudio)
add_library(JStudio_JStage)
target_sources(JStudio_JStage PRIVATE
    src/JSystem/JStudio/JStudio_JStage/control.cpp
    src/JSystem/JStudio/JStudio_JStage/object.cpp
    src/JSystem/JStudio/JStudio_JStage/object-actor.cpp
    src/JSystem/JStudio/JStudio_JStage/object-ambientlight.cpp
    src/JSystem/JStudio/JStudio_JStage/object-camera.cpp
    src/JSystem/JStudio/JStudio_JStage/object-fog.cpp
    src/JSystem/JStudio/JStudio_JStage/object-light.cpp
)
target_include_directories(JStudio_JStage PRIVATE src/)
target_include_directories(JStudio_JStage SYSTEM PRIVATE include/)
target_include_directories(JStudio_JStage SYSTEM PRIVATE include/dolphin/)
target_include_directories(JStudio_JStage SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JStudio_JStage SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JStudio_JStage)
add_library(JStudio_JAudio2)
target_sources(JStudio_JAudio2 PRIVATE
    src/JSystem/JStudio/JStudio_JAudio2/control.cpp
    src/JSystem/JStudio/JStudio_JAudio2/object-sound.cpp
)
target_include_directories(JStudio_JAudio2 PRIVATE src/)
target_include_directories(JStudio_JAudio2 SYSTEM PRIVATE include/)
target_include_directories(JStudio_JAudio2 SYSTEM PRIVATE include/dolphin/)
target_include_directories(JStudio_JAudio2 SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JStudio_JAudio2 SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JStudio_JAudio2)
add_library(JStudio_JParticle)
target_sources(JStudio_JParticle PRIVATE
    src/JSystem/JStudio/JStudio_JParticle/control.cpp
    src/JSystem/JStudio/JStudio_JParticle/object-particle.cpp
)
target_include_directories(JStudio_JParticle PRIVATE src/)
target_include_directories(JStudio_JParticle SYSTEM PRIVATE include/)
target_include_directories(JStudio_JParticle SYSTEM PRIVATE include/dolphin/)
target_include_directories(JStudio_JParticle SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JStudio_JParticle SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JStudio_JParticle)
add_library(JAudio2)
target_sources(JAudio2 PRIVATE
    src/JSystem/JAudio2/JASCalc.cpp
    src/JSystem/JAudio2/JASTaskThread.cpp
    src/JSystem/JAudio2/JASDvdThread.cpp
    src/JSystem/JAudio2/JASCallback.cpp
    src/JSystem/JAudio2/JASHeapCtrl.cpp
    src/JSystem/JAudio2/JASResArcLoader.cpp
    src/JSystem/JAudio2/JASProbe.cpp
    src/JSystem/JAudio2/JASReport.cpp
    src/JSystem/JAudio2/JASCmdStack.cpp
    src/JSystem/JAudio2/JASTrack.cpp
    src/JSystem/JAudio2/JASTrackPort.cpp
    src/JSystem/JAudio2/JASRegisterParam.cpp
    src/JSystem/JAudio2/JASSeqCtrl.cpp
    src/JSystem/JAudio2/JASSeqParser.cpp
    src/JSystem/JAudio2/JASSeqReader.cpp
    src/JSystem/JAudio2/JASAramStream.cpp
    src/JSystem/JAudio2/JASBank.cpp
    src/JSystem/JAudio2/JASBasicBank.cpp
    src/JSystem/JAudio2/JASVoiceBank.cpp
    src/JSystem/JAudio2/JASBasicInst.cpp
    src/JSystem/JAudio2/JASDrumSet.cpp
    src/JSystem/JAudio2/JASBasicWaveBank.cpp
    src/JSystem/JAudio2/JASSimpleWaveBank.cpp
    src/JSystem/JAudio2/JASWSParser.cpp
    src/JSystem/JAudio2/JASBNKParser.cpp
    src/JSystem/JAudio2/JASWaveArcLoader.cpp
    src/JSystem/JAudio2/JASChannel.cpp
    src/JSystem/JAudio2/JASLfo.cpp
    src/JSystem/JAudio2/JASOscillator.cpp
    src/JSystem/JAudio2/JASAiCtrl.cpp
    src/JSystem/JAudio2/JASAudioThread.cpp
    src/JSystem/JAudio2/JASAudioReseter.cpp
    src/JSystem/JAudio2/JASDSPChannel.cpp
    src/JSystem/JAudio2/JASDSPInterface.cpp
    src/JSystem/JAudio2/JASDriverIF.cpp
    src/JSystem/JAudio2/JASSoundParams.cpp
    src/JSystem/JAudio2/dspproc.cpp
    src/JSystem/JAudio2/dsptask.cpp
    src/JSystem/JAudio2/osdsp.cpp
    src/JSystem/JAudio2/osdsp_task.cpp
    src/JSystem/JAudio2/JAIAudible.cpp
    src/JSystem/JAudio2/JAIAudience.cpp
    src/JSystem/JAudio2/JAISe.cpp
    src/JSystem/JAudio2/JAISeMgr.cpp
    src/JSystem/JAudio2/JAISeq.cpp
    src/JSystem/JAudio2/JAISeqDataMgr.cpp
    src/JSystem/JAudio2/JAISeqMgr.cpp
    src/JSystem/JAudio2/JAISound.cpp
    src/JSystem/JAudio2/JAISoundChild.cpp
    src/JSystem/JAudio2/JAISoundHandles.cpp
    src/JSystem/JAudio2/JAISoundInfo.cpp
    src/JSystem/JAudio2/JAISoundParams.cpp
    src/JSystem/JAudio2/JAISoundStarter.cpp
    src/JSystem/JAudio2/JAIStream.cpp
    src/JSystem/JAudio2/JAIStreamDataMgr.cpp
    src/JSystem/JAudio2/JAIStreamMgr.cpp
    src/JSystem/JAudio2/JAUAudioArcInterpreter.cpp
    src/JSystem/JAudio2/JAUAudioArcLoader.cpp
    src/JSystem/JAudio2/JAUAudioMgr.cpp
    src/JSystem/JAudio2/JAUBankTable.cpp
    src/JSystem/JAudio2/JAUClusterSound.cpp
    src/JSystem/JAudio2/JAUInitializer.cpp
    src/JSystem/JAudio2/JAUSectionHeap.cpp
    src/JSystem/JAudio2/JAUSeqCollection.cpp
    src/JSystem/JAudio2/JAUSeqDataBlockMgr.cpp
    src/JSystem/JAudio2/JAUSoundAnimator.cpp
    src/JSystem/JAudio2/JAUSoundTable.cpp
    src/JSystem/JAudio2/JAUStreamFileTable.cpp
)
target_include_directories(JAudio2 PRIVATE src/)
target_include_directories(JAudio2 SYSTEM PRIVATE include/)
target_include_directories(JAudio2 SYSTEM PRIVATE include/dolphin/)
target_include_directories(JAudio2 SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JAudio2 SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JAudio2)
add_library(JAWExtSystem)
target_sources(JAWExtSystem PRIVATE
    src/JSystem/JAWExtSystem/JAWSystem.cpp
    src/JSystem/JAWExtSystem/JAWWindow3D.cpp
)
target_include_directories(JAWExtSystem PRIVATE src/)
target_include_directories(JAWExtSystem SYSTEM PRIVATE include/)
target_include_directories(JAWExtSystem SYSTEM PRIVATE include/dolphin/)
target_include_directories(JAWExtSystem SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JAWExtSystem SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JAWExtSystem)
add_library(JMessage)
target_sources(JMessage PRIVATE
    src/JSystem/JMessage/control.cpp
    src/JSystem/JMessage/data.cpp
    src/JSystem/JMessage/processor.cpp
    src/JSystem/JMessage/resource.cpp
    src/JSystem/JMessage/locale.cpp
)
target_include_directories(JMessage PRIVATE src/)
target_include_directories(JMessage SYSTEM PRIVATE include/)
target_include_directories(JMessage SYSTEM PRIVATE include/dolphin/)
target_include_directories(JMessage SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JMessage SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JMessage)
add_library(Z2AudioLib)
target_sources(Z2AudioLib PRIVATE
    src/Z2AudioLib/Z2Calc.cpp
    src/Z2AudioLib/Z2AudioArcLoader.cpp
    src/Z2AudioLib/Z2Param.cpp
    src/Z2AudioLib/Z2SoundMgr.cpp
    src/Z2AudioLib/Z2SoundStarter.cpp
    src/Z2AudioLib/Z2SoundHandles.cpp
    src/Z2AudioLib/Z2SeMgr.cpp
    src/Z2AudioLib/Z2SeqMgr.cpp
    src/Z2AudioLib/Z2StatusMgr.cpp
    src/Z2AudioLib/Z2SceneMgr.cpp
    src/Z2AudioLib/Z2FxLineMgr.cpp
    src/Z2AudioLib/Z2SoundInfo.cpp
    src/Z2AudioLib/Z2Audience.cpp
    src/Z2AudioLib/Z2SoundObject.cpp
    src/Z2AudioLib/Z2SoundObjMgr.cpp
    src/Z2AudioLib/Z2Creature.cpp
    src/Z2AudioLib/Z2LinkMgr.cpp
    src/Z2AudioLib/Z2EnvSeMgr.cpp
    src/Z2AudioLib/Z2WolfHowlMgr.cpp
    src/Z2AudioLib/Z2SpeechMgr2.cpp
    src/Z2AudioLib/Z2AudioMgr.cpp
)
target_include_directories(Z2AudioLib PRIVATE src/)
target_include_directories(Z2AudioLib SYSTEM PRIVATE include/)
target_include_directories(Z2AudioLib SYSTEM PRIVATE include/dolphin/)
target_include_directories(Z2AudioLib SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(Z2AudioLib SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE Z2AudioLib)
add_library(JKernel)
target_sources(JKernel PRIVATE
    src/JSystem/JKernel/JKRHeap.cpp
    src/JSystem/JKernel/JKRExpHeap.cpp
    src/JSystem/JKernel/JKRSolidHeap.cpp
    src/JSystem/JKernel/JKRAssertHeap.cpp
    src/JSystem/JKernel/JKRDisposer.cpp
    src/JSystem/JKernel/JKRThread.cpp
    src/JSystem/JKernel/JKRAram.cpp
    src/JSystem/JKernel/JKRAramHeap.cpp
    src/JSystem/JKernel/JKRAramBlock.cpp
    src/JSystem/JKernel/JKRAramPiece.cpp
    src/JSystem/JKernel/JKRAramStream.cpp
    src/JSystem/JKernel/JKRFileLoader.cpp
    src/JSystem/JKernel/JKRFileFinder.cpp
    src/JSystem/JKernel/JKRFileCache.cpp
    src/JSystem/JKernel/JKRArchivePub.cpp
    src/JSystem/JKernel/JKRArchivePri.cpp
    src/JSystem/JKernel/JKRMemArchive.cpp
    src/JSystem/JKernel/JKRAramArchive.cpp
    src/JSystem/JKernel/JKRDvdArchive.cpp
    src/JSystem/JKernel/JKRCompArchive.cpp
    src/JSystem/JKernel/JKRFile.cpp
    src/JSystem/JKernel/JKRDvdFile.cpp
    src/JSystem/JKernel/JKRDvdRipper.cpp
    src/JSystem/JKernel/JKRDvdAramRipper.cpp
    src/JSystem/JKernel/JKRDecomp.cpp
)
target_include_directories(JKernel PRIVATE src/)
target_include_directories(JKernel SYSTEM PRIVATE include/)
target_include_directories(JKernel SYSTEM PRIVATE include/dolphin/)
target_include_directories(JKernel SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JKernel SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JKernel)
add_library(JSupport)
target_sources(JSupport PRIVATE
    src/JSystem/JSupport/JSUList.cpp
    src/JSystem/JSupport/JSUInputStream.cpp
    src/JSystem/JSupport/JSUMemoryStream.cpp
    src/JSystem/JSupport/JSUFileStream.cpp
)
target_include_directories(JSupport PRIVATE src/)
target_include_directories(JSupport SYSTEM PRIVATE include/)
target_include_directories(JSupport SYSTEM PRIVATE include/dolphin/)
target_include_directories(JSupport SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JSupport SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JSupport)
add_library(JGadget)
target_sources(JGadget PRIVATE
    src/JSystem/JGadget/binary.cpp
    src/JSystem/JGadget/linklist.cpp
    src/JSystem/JGadget/std-vector.cpp
)
target_include_directories(JGadget PRIVATE src/)
target_include_directories(JGadget SYSTEM PRIVATE include/)
target_include_directories(JGadget SYSTEM PRIVATE include/dolphin/)
target_include_directories(JGadget SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JGadget SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JGadget)
add_library(JUtility)
target_sources(JUtility PRIVATE
    src/JSystem/JUtility/JUTCacheFont.cpp
    src/JSystem/JUtility/JUTResource.cpp
    src/JSystem/JUtility/JUTTexture.cpp
    src/JSystem/JUtility/JUTPalette.cpp
    src/JSystem/JUtility/JUTNameTab.cpp
    src/JSystem/JUtility/JUTGraphFifo.cpp
    src/JSystem/JUtility/JUTFont.cpp
    src/JSystem/JUtility/JUTResFont.cpp
    src/JSystem/JUtility/JUTDbPrint.cpp
    src/JSystem/JUtility/JUTGamePad.cpp
    src/JSystem/JUtility/JUTException.cpp
    src/JSystem/JUtility/JUTDirectPrint.cpp
    src/JSystem/JUtility/JUTAssert.cpp
    src/JSystem/JUtility/JUTVideo.cpp
    src/JSystem/JUtility/JUTXfb.cpp
    src/JSystem/JUtility/JUTFader.cpp
    src/JSystem/JUtility/JUTProcBar.cpp
    src/JSystem/JUtility/JUTConsole.cpp
    src/JSystem/JUtility/JUTDirectFile.cpp
    src/JSystem/JUtility/JUTFontData_Ascfont_fix12.cpp
)
target_include_directories(JUtility PRIVATE src/)
target_include_directories(JUtility SYSTEM PRIVATE include/)
target_include_directories(JUtility SYSTEM PRIVATE include/dolphin/)
target_include_directories(JUtility SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JUtility SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JUtility)
add_library(J2DGraph)
target_sources(J2DGraph PRIVATE
    src/JSystem/J2DGraph/J2DGrafContext.cpp
    src/JSystem/J2DGraph/J2DOrthoGraph.cpp
    src/JSystem/J2DGraph/J2DTevs.cpp
    src/JSystem/J2DGraph/J2DMaterial.cpp
    src/JSystem/J2DGraph/J2DMatBlock.cpp
    src/JSystem/J2DGraph/J2DMaterialFactory.cpp
    src/JSystem/J2DGraph/J2DPrint.cpp
    src/JSystem/J2DGraph/J2DPane.cpp
    src/JSystem/J2DGraph/J2DScreen.cpp
    src/JSystem/J2DGraph/J2DWindow.cpp
    src/JSystem/J2DGraph/J2DPicture.cpp
    src/JSystem/J2DGraph/J2DTextBox.cpp
    src/JSystem/J2DGraph/J2DWindowEx.cpp
    src/JSystem/J2DGraph/J2DPictureEx.cpp
    src/JSystem/J2DGraph/J2DTextBoxEx.cpp
    src/JSystem/J2DGraph/J2DAnmLoader.cpp
    src/JSystem/J2DGraph/J2DAnimation.cpp
    src/JSystem/J2DGraph/J2DManage.cpp
)
target_include_directories(J2DGraph PRIVATE src/)
target_include_directories(J2DGraph SYSTEM PRIVATE include/)
target_include_directories(J2DGraph SYSTEM PRIVATE include/dolphin/)
target_include_directories(J2DGraph SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(J2DGraph SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE J2DGraph)
add_library(J3DGraphBase)
target_sources(J3DGraphBase PRIVATE
    src/JSystem/J3DGraphBase/J3DGD.cpp
    src/JSystem/J3DGraphBase/J3DSys.cpp
    src/JSystem/J3DGraphBase/J3DVertex.cpp
    src/JSystem/J3DGraphBase/J3DTransform.cpp
    src/JSystem/J3DGraphBase/J3DTexture.cpp
    src/JSystem/J3DGraphBase/J3DPacket.cpp
    src/JSystem/J3DGraphBase/J3DShapeMtx.cpp
    src/JSystem/J3DGraphBase/J3DShapeDraw.cpp
    src/JSystem/J3DGraphBase/J3DShape.cpp
    src/JSystem/J3DGraphBase/J3DMaterial.cpp
    src/JSystem/J3DGraphBase/J3DMatBlock.cpp
    src/JSystem/J3DGraphBase/J3DTevs.cpp
    src/JSystem/J3DGraphBase/J3DDrawBuffer.cpp
    src/JSystem/J3DGraphBase/J3DStruct.cpp
)
target_include_directories(J3DGraphBase PRIVATE src/)
target_include_directories(J3DGraphBase SYSTEM PRIVATE include/)
target_include_directories(J3DGraphBase SYSTEM PRIVATE include/dolphin/)
target_include_directories(J3DGraphBase SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(J3DGraphBase SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE J3DGraphBase)
add_library(J3DGraphAnimator)
target_sources(J3DGraphAnimator PRIVATE
    src/JSystem/J3DGraphAnimator/J3DShapeTable.cpp
    src/JSystem/J3DGraphAnimator/J3DJointTree.cpp
    src/JSystem/J3DGraphAnimator/J3DModelData.cpp
    src/JSystem/J3DGraphAnimator/J3DMtxBuffer.cpp
    src/JSystem/J3DGraphAnimator/J3DModel.cpp
    src/JSystem/J3DGraphAnimator/J3DAnimation.cpp
    src/JSystem/J3DGraphAnimator/J3DMaterialAnm.cpp
    src/JSystem/J3DGraphAnimator/J3DSkinDeform.cpp
    src/JSystem/J3DGraphAnimator/J3DCluster.cpp
    src/JSystem/J3DGraphAnimator/J3DJoint.cpp
    src/JSystem/J3DGraphAnimator/J3DMaterialAttach.cpp
)
target_include_directories(J3DGraphAnimator PRIVATE src/)
target_include_directories(J3DGraphAnimator SYSTEM PRIVATE include/)
target_include_directories(J3DGraphAnimator SYSTEM PRIVATE include/dolphin/)
target_include_directories(J3DGraphAnimator SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(J3DGraphAnimator SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE J3DGraphAnimator)
add_library(J3DGraphLoader)
target_sources(J3DGraphLoader PRIVATE
    src/JSystem/J3DGraphLoader/J3DMaterialFactory.cpp
    src/JSystem/J3DGraphLoader/J3DMaterialFactory_v21.cpp
    src/JSystem/J3DGraphLoader/J3DClusterLoader.cpp
    src/JSystem/J3DGraphLoader/J3DModelLoader.cpp
    src/JSystem/J3DGraphLoader/J3DModelLoaderCalcSize.cpp
    src/JSystem/J3DGraphLoader/J3DJointFactory.cpp
    src/JSystem/J3DGraphLoader/J3DShapeFactory.cpp
    src/JSystem/J3DGraphLoader/J3DAnmLoader.cpp
)
target_include_directories(J3DGraphLoader PRIVATE src/)
target_include_directories(J3DGraphLoader SYSTEM PRIVATE include/)
target_include_directories(J3DGraphLoader SYSTEM PRIVATE include/dolphin/)
target_include_directories(J3DGraphLoader SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(J3DGraphLoader SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE J3DGraphLoader)
add_library(JMath)
target_sources(JMath PRIVATE
    src/JSystem/JMath/JMath.cpp
    src/JSystem/JMath/random.cpp
    src/JSystem/JMath/JMATrigonometric.cpp
)
target_include_directories(JMath PRIVATE src/)
target_include_directories(JMath SYSTEM PRIVATE include/)
target_include_directories(JMath SYSTEM PRIVATE include/dolphin/)
target_include_directories(JMath SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(JMath SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE JMath)
add_library(mtx)
target_sources(mtx PRIVATE
    src/dolphin/mtx/mtx.c
    src/dolphin/mtx/mtxvec.c
    src/dolphin/mtx/mtx44.c
    src/dolphin/mtx/vec.c
    src/dolphin/mtx/quat.c
)
set_source_files_properties(src/dolphin/mtx/mtx.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/mtxvec.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/mtx44.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/vec.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/quat.c PROPERTIES LANGUAGE CXX)
target_include_directories(mtx PRIVATE src/)
target_include_directories(mtx SYSTEM PRIVATE include/)
target_include_directories(mtx SYSTEM PRIVATE include/dolphin/)
target_include_directories(mtx SYSTEM PRIVATE assets/GZ2E01/)
target_include_directories(mtx SYSTEM PRIVATE build_ack/include/)
target_link_libraries(Tppc PRIVATE mtx)
