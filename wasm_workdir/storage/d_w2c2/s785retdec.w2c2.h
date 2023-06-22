#ifndef s785retdec_H
#define s785retdec_H

#include "w2c2_base.h"

typedef struct s785retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s785retdecInstance;

void f0(s785retdecInstance*);

void f1(s785retdecInstance*);

U32 f2(s785retdecInstance*);

void f3(s785retdecInstance*,U32);

U32 f4(s785retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s785retdecInstance*,U32,U32,U32,U32,U32);

void f6(s785retdecInstance*,U32);

void f7(s785retdecInstance*,U32,U32,U32);

void f8(s785retdecInstance*,U32,U32,U32);

void s785retdec____wasm_call_ctors(s785retdecInstance*i);

void s785retdec____wasm_apply_data_relocs(s785retdecInstance*i);

U32 s785retdec_func_1(s785retdecInstance*i);

void s785retdec_call_cb(s785retdecInstance*i,U32 l0);

void s785retdecInstantiate(s785retdecInstance* instance, void* resolve(const char* module, const char* name));

void s785retdecFreeInstance(s785retdecInstance* instance);

#endif /* s785retdec_H */

