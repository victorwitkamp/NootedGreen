#ifndef i915_lrc_reg_hpp
#define i915_lrc_reg_hpp

#define LRC_PPHWSP_PN    (0)
#define LRC_PPHWSP_SZ    (1)
#define LRC_STATE_PN     (LRC_PPHWSP_PN + LRC_PPHWSP_SZ)
#define LRC_PAGE_SIZE    (4096u)
#define LRC_STATE_OFFSET (LRC_STATE_PN * LRC_PAGE_SIZE)

#define CTX_CONTEXT_CONTROL (0x02 + 1)
#define CTX_RING_TAIL       (0x06 + 1)
#define CTX_RING_START      (0x08 + 1)

#endif
