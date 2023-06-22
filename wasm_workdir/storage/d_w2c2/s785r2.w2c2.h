#ifndef s785r2_H
#define s785r2_H

#include "w2c2_base.h"

typedef struct s785r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s785r2Instance;

void f0(s785r2Instance*);

void f1(s785r2Instance*);

U32 f2(s785r2Instance*);

void f3(s785r2Instance*,U32);

U32 f4(s785r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s785r2Instance*,U32,U32,U32,U32,U32);

void f6(s785r2Instance*,U32);

void f7(s785r2Instance*,U32,U32,U32);

void f8(s785r2Instance*,U32,U32,U32);

void s785r2____wasm_call_ctors(s785r2Instance*i);

void s785r2____wasm_apply_data_relocs(s785r2Instance*i);

U32 s785r2_func_1(s785r2Instance*i);

void s785r2_call_cb(s785r2Instance*i,U32 l0);

void s785r2Instantiate(s785r2Instance* instance, void* resolve(const char* module, const char* name));

void s785r2FreeInstance(s785r2Instance* instance);

#endif /* s785r2_H */

