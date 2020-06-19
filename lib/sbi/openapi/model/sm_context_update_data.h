/*
 * sm_context_update_data.h
 *
 *
 */

#ifndef _OpenAPI_sm_context_update_data_H_
#define _OpenAPI_sm_context_update_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "access_type.h"
#include "backup_amf_info.h"
#include "cause.h"
#include "ddn_failure_subs.h"
#include "eps_interworking_indication.h"
#include "exemption_ind.h"
#include "guami.h"
#include "ho_state.h"
#include "indirect_data_forwarding_tunnel_info.h"
#include "ma_release_indication.h"
#include "mo_exception_data_flag.h"
#include "mo_exp_data_counter.h"
#include "n2_sm_info_type.h"
#include "ng_ap_cause.h"
#include "ng_ran_target_id.h"
#include "plmn_id_nid.h"
#include "presence_state.h"
#include "rat_type.h"
#include "ref_to_binary_data.h"
#include "snssai.h"
#include "trace_data.h"
#include "tunnel_info.h"
#include "up_cnx_state.h"
#include "user_location.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_sm_context_update_data_s OpenAPI_sm_context_update_data_t;
typedef struct OpenAPI_sm_context_update_data_s {
    char *pei;
    char *serving_nf_id;
    struct OpenAPI_guami_s *guami;
    struct OpenAPI_plmn_id_nid_s *serving_network;
    OpenAPI_list_t *backup_amf_info;
    OpenAPI_access_type_e an_type;
    OpenAPI_access_type_e additional_an_type;
    OpenAPI_rat_type_e rat_type;
    struct OpenAPI_presence_state_s *presence_in_ladn;
    struct OpenAPI_user_location_s *ue_location;
    char *ue_time_zone;
    struct OpenAPI_user_location_s *add_ue_location;
    struct OpenAPI_up_cnx_state_s *up_cnx_state;
    struct OpenAPI_ho_state_s *ho_state;
    int to_be_switched;
    int failed_to_be_switched;
    struct OpenAPI_ref_to_binary_data_s *n1_sm_msg;
    struct OpenAPI_ref_to_binary_data_s *n2_sm_info;
    OpenAPI_n2_sm_info_type_e n2_sm_info_type;
    struct OpenAPI_ng_ran_target_id_s *target_id;
    char *target_serving_nf_id;
    char *sm_context_status_uri;
    int data_forwarding;
    struct OpenAPI_tunnel_info_s *n9_forwarding_tunnel;
    OpenAPI_list_t *n9_dl_forwarding_tnl_list;
    OpenAPI_list_t *n9_ul_forwarding_tnl_list;
    OpenAPI_list_t *eps_bearer_setup;
    OpenAPI_list_t *revoke_ebi_list;
    int release;
    struct OpenAPI_cause_s *cause;
    struct OpenAPI_ng_ap_cause_s *ng_ap_cause;
    int _5g_mm_cause_value;
    struct OpenAPI_snssai_s *s_nssai;
    struct OpenAPI_trace_data_s *trace_data;
    struct OpenAPI_eps_interworking_indication_s *eps_interworking_ind;
    int an_type_can_be_changed;
    struct OpenAPI_ref_to_binary_data_s *n2_sm_info_ext1;
    OpenAPI_n2_sm_info_type_e n2_sm_info_type_ext1;
    struct OpenAPI_ma_release_indication_s *ma_release_ind;
    int ma_nw_upgrade_ind;
    int ma_request_ind;
    struct OpenAPI_exemption_ind_s *exemption_ind;
    char *supported_features;
    struct OpenAPI_mo_exception_data_flag_s *mo_exp_data_ind;
    struct OpenAPI_mo_exp_data_counter_s *mo_exp_data_counter;
    int extended_nas_sm_timer_ind;
    char forwarding_f_teid;
    OpenAPI_list_t *forwarding_bearer_contexts;
    struct OpenAPI_ddn_failure_subs_s *ddn_failure_subs;
} OpenAPI_sm_context_update_data_t;

OpenAPI_sm_context_update_data_t *OpenAPI_sm_context_update_data_create(
    char *pei,
    char *serving_nf_id,
    OpenAPI_guami_t *guami,
    OpenAPI_plmn_id_nid_t *serving_network,
    OpenAPI_list_t *backup_amf_info,
    OpenAPI_access_type_e an_type,
    OpenAPI_access_type_e additional_an_type,
    OpenAPI_rat_type_e rat_type,
    OpenAPI_presence_state_t *presence_in_ladn,
    OpenAPI_user_location_t *ue_location,
    char *ue_time_zone,
    OpenAPI_user_location_t *add_ue_location,
    OpenAPI_up_cnx_state_t *up_cnx_state,
    OpenAPI_ho_state_t *ho_state,
    int to_be_switched,
    int failed_to_be_switched,
    OpenAPI_ref_to_binary_data_t *n1_sm_msg,
    OpenAPI_ref_to_binary_data_t *n2_sm_info,
    OpenAPI_n2_sm_info_type_e n2_sm_info_type,
    OpenAPI_ng_ran_target_id_t *target_id,
    char *target_serving_nf_id,
    char *sm_context_status_uri,
    int data_forwarding,
    OpenAPI_tunnel_info_t *n9_forwarding_tunnel,
    OpenAPI_list_t *n9_dl_forwarding_tnl_list,
    OpenAPI_list_t *n9_ul_forwarding_tnl_list,
    OpenAPI_list_t *eps_bearer_setup,
    OpenAPI_list_t *revoke_ebi_list,
    int release,
    OpenAPI_cause_t *cause,
    OpenAPI_ng_ap_cause_t *ng_ap_cause,
    int _5g_mm_cause_value,
    OpenAPI_snssai_t *s_nssai,
    OpenAPI_trace_data_t *trace_data,
    OpenAPI_eps_interworking_indication_t *eps_interworking_ind,
    int an_type_can_be_changed,
    OpenAPI_ref_to_binary_data_t *n2_sm_info_ext1,
    OpenAPI_n2_sm_info_type_e n2_sm_info_type_ext1,
    OpenAPI_ma_release_indication_t *ma_release_ind,
    int ma_nw_upgrade_ind,
    int ma_request_ind,
    OpenAPI_exemption_ind_t *exemption_ind,
    char *supported_features,
    OpenAPI_mo_exception_data_flag_t *mo_exp_data_ind,
    OpenAPI_mo_exp_data_counter_t *mo_exp_data_counter,
    int extended_nas_sm_timer_ind,
    char forwarding_f_teid,
    OpenAPI_list_t *forwarding_bearer_contexts,
    OpenAPI_ddn_failure_subs_t *ddn_failure_subs
    );
void OpenAPI_sm_context_update_data_free(OpenAPI_sm_context_update_data_t *sm_context_update_data);
OpenAPI_sm_context_update_data_t *OpenAPI_sm_context_update_data_parseFromJSON(cJSON *sm_context_update_dataJSON);
cJSON *OpenAPI_sm_context_update_data_convertToJSON(OpenAPI_sm_context_update_data_t *sm_context_update_data);
OpenAPI_sm_context_update_data_t *OpenAPI_sm_context_update_data_copy(OpenAPI_sm_context_update_data_t *dst, OpenAPI_sm_context_update_data_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sm_context_update_data_H_ */
