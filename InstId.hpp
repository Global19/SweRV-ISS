// Copyright 2020 Western Digital Corporation or its affiliates.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

namespace WdRiscv
{
  /// Associate a unique integer identifier with each instruction.
  enum class InstId
    {
     illegal,

     // Base.
     lui,
     auipc,
     jal,
     jalr,
     beq,
     bne,
     blt,
     bge,
     bltu,
     bgeu,
     lb,
     lh,
     lw,
     lbu,
     lhu,
     sb,
     sh,
     sw,
     addi,
     slti,
     sltiu,
     xori,
     ori,
     andi,
     slli,
     srli,
     srai,
     add,
     sub,
     sll,
     slt,
     sltu,
     xor_,
     srl,
     sra,
     or_,
     and_,
     fence,
     fencei,
     ecall,
     ebreak,

     // CSR
     csrrw,
     csrrs,
     csrrc,
     csrrwi,
     csrrsi,
     csrrci,

     // rv64i
     lwu,
     ld,
     sd,
     addiw,
     slliw,
     srliw,
     sraiw,
     addw,
     subw,
     sllw,
     srlw,
     sraw,
 
     // Mul/div
     mul,
     mulh,
     mulhsu,
     mulhu,
     div,
     divu,
     rem,
     remu,

     // 64-bit mul/div
     mulw,
     divw,
     divuw,
     remw,
     remuw,

     // Atomic
     lr_w,
     sc_w,
     amoswap_w,
     amoadd_w,
     amoxor_w,
     amoand_w,
     amoor_w,
     amomin_w,
     amomax_w,
     amominu_w,
     amomaxu_w,

     // 64-bit atomic
     lr_d,
     sc_d,
     amoswap_d,
     amoadd_d,
     amoxor_d,
     amoand_d,
     amoor_d,
     amomin_d,
     amomax_d,
     amominu_d,
     amomaxu_d,

     // rv32f
     flw,
     fsw,
     fmadd_s,
     fmsub_s,
     fnmsub_s,
     fnmadd_s,
     fadd_s,
     fsub_s,
     fmul_s,
     fdiv_s,
     fsqrt_s,
     fsgnj_s,
     fsgnjn_s,
     fsgnjx_s,
     fmin_s,
     fmax_s,
     fcvt_w_s,
     fcvt_wu_s,
     fmv_x_w,
     feq_s,
     flt_s,
     fle_s,
     fclass_s,
     fcvt_s_w,
     fcvt_s_wu,
     fmv_w_x,

     // rv64f
     fcvt_l_s,
     fcvt_lu_s,
     fcvt_s_l,
     fcvt_s_lu,

     // rv32d
     fld,
     fsd,
     fmadd_d,
     fmsub_d,
     fnmsub_d,
     fnmadd_d,
     fadd_d,
     fsub_d,
     fmul_d,
     fdiv_d,
     fsqrt_d,
     fsgnj_d,
     fsgnjn_d,
     fsgnjx_d,
     fmin_d,
     fmax_d,
     fcvt_s_d,
     fcvt_d_s,
     feq_d,
     flt_d,
     fle_d,
     fclass_d,
     fcvt_w_d,
     fcvt_wu_d,
     fcvt_d_w,
     fcvt_d_wu,

     // rv64f
     fcvt_l_d,
     fcvt_lu_d,
     fmv_x_d,
     fcvt_d_l,
     fcvt_d_lu,
     fmv_d_x,

     // Privileged
     mret,
     uret,
     sret,
     wfi,

     // Supervisor
     sfence_vma,

     // Compressed insts
     c_addi4spn,
     c_fld,
     c_lq,
     c_lw,
     c_flw,
     c_ld,
     c_fsd,
     c_sq,
     c_sw,
     c_fsw,
     c_sd,
     c_addi,
     c_jal,
     c_li,
     c_addi16sp,
     c_lui,
     c_srli,
     c_srli64,
     c_srai,
     c_srai64,
     c_andi,
     c_sub,
     c_xor,
     c_or,
     c_and,
     c_subw,
     c_addw,
     c_j,
     c_beqz,
     c_bnez,
     c_slli,
     c_slli64,
     c_fldsp,
     c_lwsp,
     c_flwsp,
     c_ldsp,
     c_jr,
     c_mv,
     c_ebreak,
     c_jalr,
     c_add,
     c_fsdsp,
     c_swsp,
     c_fswsp,
     c_addiw,
     c_sdsp,

     // zbb
     clz,
     ctz,
     cpop,
     clzw,
     ctzw,
     cpopw,
     min,
     max,
     minu,
     maxu,
     sext_b,
     sext_h,
     andn,
     orn,
     xnor,
     rol,
     ror,
     rori,
     rolw,
     rorw,
     roriw,
     rev8,  // was bswap

     // zbp
     pack,
     packh,
     packu,
     packw,
     packuw,
     grev,
     grevi,
     gorc,
     gorci,
     shfl,
     shflw,
     shfli,
     unshfl,
     unshfli,
     unshflw,
     xperm_n,
     xperm_b,
     xperm_h,
     xperm_w,
     slo,
     sro,
     sloi,
     sroi,
     slow,
     srow,
     sloiw,
     sroiw,

     // zbs
     bset,
     bclr,
     binv,
     bext,
     bseti,
     bclri,
     binvi,
     bexti,

     // zbe
     bcompress,    // was bext
     bdecompress,  // Was bdep

     // zbf
     bfp,

     // zbc
     clmul,
     clmulh,
     clmulr,

     // zba
     sh1add,
     sh2add,
     sh3add,
     sh1add_uw,
     sh2add_uw,
     sh3add_uw,
     add_uw,
     slli_uw,

     // zbr
     crc32_b,
     crc32_h,
     crc32_w,
     crc32_d,
     crc32c_b,
     crc32c_h,
     crc32c_w,
     crc32c_d,

     // zbm
     bmator,
     bmatxor,
     bmatflip,

     // zbt
     cmov,
     cmix,
     fsl,
     fsr,
     fsri,

     // Custom instructions
     load64,
     store64,
     bbarrier,

     // vector
     vsetvli,
     vsetvl,

     vadd_vv,
     vadd_vx,
     vadd_vi,
     vsub_vv,
     vsub_vx,
     vrsub_vx,
     vrsub_vi,

     vwaddu_vv,
     vwaddu_vx,
     vwsubu_vv,
     vwsubu_vx,
     vwadd_vv,
     vwadd_vx,
     vwsub_vv,
     vwsub_vx,
     vwaddu_wv,
     vwaddu_wx,
     vwsubu_wv,
     vwsubu_wx,
     vwadd_wv,
     vwadd_wx,
     vwsub_wv,
     vwsub_wx,

     vminu_vv,
     vminu_vx,
     vmin_vv,
     vmin_vx,
     vmaxu_vv,
     vmaxu_vx,
     vmax_vv,
     vmax_vx,

     vand_vv,
     vand_vx,
     vand_vi,
     vor_vv,
     vor_vx,
     vor_vi,
     vxor_vv,
     vxor_vx,
     vxor_vi,

     vrgather_vv,
     vrgather_vx,
     vrgather_vi,
     vrgatherei16_vv,

     vcompress_vm,

     vredsum_vs,
     vredand_vs,
     vredor_vs,
     vredxor_vs,
     vredminu_vs,
     vredmin_vs,
     vredmaxu_vs,
     vredmax_vs,

     vmand_mm,
     vmnand_mm,
     vmandnot_mm,
     vmxor_mm,
     vmor_mm,
     vmnor_mm,
     vmornot_mm,
     vmxnor_mm,
     vpopc_m,
     vfirst_m,
     vmsbf_m,
     vmsif_m,
     vmsof_m,
     viota_m,
     vid_v,

     vslideup_vx,
     vslideup_vi,
     vslide1up_vx,
     vslidedown_vx,
     vslidedown_vi,

     vmul_vv,
     vmul_vx,
     vmulh_vv,
     vmulh_vx,
     vmulhu_vv,
     vmulhu_vx,
     vmulhsu_vv,
     vmulhsu_vx,

     vwmulu_vv,
     vwmulu_vx,
     vwmul_vv,
     vwmul_vx,
     vwmulsu_vv,
     vwmulsu_vx,

     vwmaccu_vv,
     vwmaccu_vx,
     vwmacc_vv,
     vwmacc_vx,
     vwmaccsu_vv,
     vwmaccsu_vx,
     vwmaccus_vx,

     vdivu_vv,
     vdivu_vx,
     vdiv_vv,
     vdiv_vx,
     vremu_vv,
     vremu_vx,
     vrem_vv,
     vrem_vx,

     vsext_vf2,
     vsext_vf4,
     vsext_vf8,
     vzext_vf2,
     vzext_vf4,
     vzext_vf8,

     vadc_vvm,
     vadc_vxm,
     vadc_vim,
     vsbc_vvm,
     vsbc_vxm,
     vmadc_vvm,
     vmadc_vxm,
     vmadc_vim,
     vmsbc_vvm,
     vmsbc_vxm,

     vmerge_vv,
     vmerge_vx,
     vmerge_vi,

     vmv_x_s,
     vmv_s_x,

     vmv_v_v,
     vmv_v_x,
     vmv_v_i,

     vmv1r_v,
     vmv2r_v,
     vmv4r_v,
     vmv8r_v,

     vsaddu_vv,
     vsaddu_vx,
     vsaddu_vi,
     vsadd_vv,
     vsadd_vx,
     vsadd_vi,
     vssubu_vv,
     vssubu_vx,
     vssub_vv,
     vssub_vx,
     vaaddu_vv,
     vaaddu_vx,
     vaadd_vv,
     vaadd_vx,
     vasubu_vv,
     vasubu_vx,
     vasub_vv,
     vasub_vx,
     vsmul_vv,
     vsmul_vx,
     vssrl_vv,
     vssrl_vx,
     vssrl_vi,
     vssra_vv,
     vssra_vx,
     vssra_vi,
     vnclipu_wv,
     vnclipu_wx,
     vnclipu_wi,
     vnclip_wv,
     vnclip_wx,
     vnclip_wi,

     vle8_v,
     vle16_v,
     vle32_v,
     vle64_v,
     vle128_v,
     vle256_v,
     vle512_v,
     vle1024_v,

     vse8_v,
     vse16_v,
     vse32_v,
     vse64_v,
     vse128_v,
     vse256_v,
     vse512_v,
     vse1024_v,

     vlre8_v,
     vlre16_v,
     vlre32_v,
     vlre64_v,
     vlre128_v,
     vlre256_v,
     vlre512_v,
     vlre1024_v,

     vsre8_v,
     vsre16_v,
     vsre32_v,
     vsre64_v,
     vsre128_v,
     vsre256_v,
     vsre512_v,
     vsre1024_v,

     vle8ff_v,
     vle16ff_v,
     vle32ff_v,
     vle64ff_v,
     vle128ff_v,
     vle256ff_v,
     vle512ff_v,
     vle1024ff_v,

     vlse8_v,
     vlse16_v,
     vlse32_v,
     vlse64_v,
     vlse128_v,
     vlse256_v,
     vlse512_v,
     vlse1024_v,

     vsse8_v,
     vsse16_v,
     vsse32_v,
     vsse64_v,
     vsse128_v,
     vsse256_v,
     vsse512_v,
     vsse1024_v,

     vlxei8_v,
     vlxei16_v,
     vlxei32_v,
     vlxei64_v,

     vsxei8_v,
     vsxei16_v,
     vsxei32_v,
     vsxei64_v,

     maxId = vsxei64_v
    };
}
