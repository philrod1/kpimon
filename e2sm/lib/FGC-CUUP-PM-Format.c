/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v01.02.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "FGC-CUUP-PM-Format.h"

#include "SliceToReportListItem.h"
static int
memb_sliceToReportList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sliceToReportList_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..1024)) */};
static asn_per_constraints_t asn_PER_type_sliceToReportList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sliceToReportList_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..1024)) */};
static asn_per_constraints_t asn_PER_memb_sliceToReportList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sliceToReportList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SliceToReportListItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sliceToReportList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sliceToReportList_specs_2 = {
	sizeof(struct FGC_CUUP_PM_Format__sliceToReportList),
	offsetof(struct FGC_CUUP_PM_Format__sliceToReportList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sliceToReportList_2 = {
	"sliceToReportList",
	"sliceToReportList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sliceToReportList_tags_2,
	sizeof(asn_DEF_sliceToReportList_tags_2)
		/sizeof(asn_DEF_sliceToReportList_tags_2[0]) - 1, /* 1 */
	asn_DEF_sliceToReportList_tags_2,	/* Same as above */
	sizeof(asn_DEF_sliceToReportList_tags_2)
		/sizeof(asn_DEF_sliceToReportList_tags_2[0]), /* 2 */
	{ &asn_OER_type_sliceToReportList_constr_2, &asn_PER_type_sliceToReportList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_sliceToReportList_2,
	1,	/* Single element */
	&asn_SPC_sliceToReportList_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FGC_CUUP_PM_Format_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FGC_CUUP_PM_Format, sliceToReportList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sliceToReportList_2,
		0,
		{ &asn_OER_memb_sliceToReportList_constr_2, &asn_PER_memb_sliceToReportList_constr_2,  memb_sliceToReportList_constraint_1 },
		0, 0, /* No default value */
		"sliceToReportList"
		},
};
static const ber_tlv_tag_t asn_DEF_FGC_CUUP_PM_Format_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FGC_CUUP_PM_Format_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sliceToReportList */
};
asn_SEQUENCE_specifics_t asn_SPC_FGC_CUUP_PM_Format_specs_1 = {
	sizeof(struct FGC_CUUP_PM_Format),
	offsetof(struct FGC_CUUP_PM_Format, _asn_ctx),
	asn_MAP_FGC_CUUP_PM_Format_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FGC_CUUP_PM_Format = {
	"FGC-CUUP-PM-Format",
	"FGC-CUUP-PM-Format",
	&asn_OP_SEQUENCE,
	asn_DEF_FGC_CUUP_PM_Format_tags_1,
	sizeof(asn_DEF_FGC_CUUP_PM_Format_tags_1)
		/sizeof(asn_DEF_FGC_CUUP_PM_Format_tags_1[0]), /* 1 */
	asn_DEF_FGC_CUUP_PM_Format_tags_1,	/* Same as above */
	sizeof(asn_DEF_FGC_CUUP_PM_Format_tags_1)
		/sizeof(asn_DEF_FGC_CUUP_PM_Format_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FGC_CUUP_PM_Format_1,
	1,	/* Elements count */
	&asn_SPC_FGC_CUUP_PM_Format_specs_1	/* Additional specs */
};
