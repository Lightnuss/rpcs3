#include "stdafx.h"
#include "Emu/System.h"
#include "Emu/ARMv7/ARMv7Module.h"

#include "sceMd5.h"

LOG_CHANNEL(sceMd5);

s32 sceMd5Digest(vm::cptr<void> plain, u32 len, vm::ptr<u8> digest)
{
	throw EXCEPTION("");
}

s32 sceMd5BlockInit(vm::ptr<SceMd5Context> pContext)
{
	throw EXCEPTION("");
}

s32 sceMd5BlockUpdate(vm::ptr<SceMd5Context> pContext, vm::cptr<void> plain, u32 len)
{
	throw EXCEPTION("");
}

s32 sceMd5BlockResult(vm::ptr<SceMd5Context> pContext, vm::ptr<u8> digest)
{
	throw EXCEPTION("");
}

#define REG_FUNC(nid, name) REG_FNID(SceMd5, nid, name)

DECLARE(arm_module_manager::SceMd5)("SceMd5", []()
{
	REG_FUNC(0xB845BCCB, sceMd5Digest);
	REG_FUNC(0x4D6436F9, sceMd5BlockInit);
	REG_FUNC(0x094A4902, sceMd5BlockUpdate);
	REG_FUNC(0xB94ABF83, sceMd5BlockResult);
});
