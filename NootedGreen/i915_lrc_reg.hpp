#ifndef i915_lrc_reg_hpp
#define i915_lrc_reg_hpp

// From i915, drivers/gpu/drm/i915/gt/intel_lrc.h (the per-process HWSP page and the state page after it) and
// gt/intel_lrc_reg.h (the dword offsets inside the state page: each names the value slot of a register's LRI pair):
// https://github.com/torvalds/linux/blob/65ba8f3/drivers/gpu/drm/i915/gt/intel_lrc.h#L23-L27
// https://github.com/torvalds/linux/blob/65ba8f3/drivers/gpu/drm/i915/gt/intel_lrc_reg.h#L14-L28

#define LRC_PPHWSP_PN    (0)
#define LRC_PPHWSP_SZ    (1)
#define LRC_STATE_PN     (LRC_PPHWSP_PN + LRC_PPHWSP_SZ)
#define LRC_STATE_OFFSET (LRC_STATE_PN * PAGE_SIZE)

#define CTX_CONTEXT_CONTROL (0x02 + 1)
#define CTX_RING_HEAD       (0x04 + 1)
#define CTX_RING_TAIL       (0x06 + 1)
#define CTX_RING_START      (0x08 + 1)
#define CTX_RING_CTL        (0x0a + 1)
#define CTX_PDP0_UDW        (0x30 + 1)
#define CTX_PDP0_LDW        (0x32 + 1)

#endif
