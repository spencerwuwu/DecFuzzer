#ifndef s20retdec_H
#define s20retdec_H

#include "w2c2_base.h"

typedef struct s20retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s20retdecInstance;

void f0(s20retdecInstance*);

void f1(s20retdecInstance*);

U32 f2(s20retdecInstance*);

void f3(s20retdecInstance*,U32);

U32 f4(s20retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s20retdecInstance*,U32,U32,U32,U32,U32);

void f6(s20retdecInstance*,U32);

void f7(s20retdecInstance*,U32,U32,U32);

void f8(s20retdecInstance*,U32,U32,U32);

void s20retdec____wasm_call_ctors(s20retdecInstance*i);

void s20retdec____wasm_apply_data_relocs(s20retdecInstance*i);

U32 s20retdec_func_1(s20retdecInstance*i);

void s20retdec_call_cb(s20retdecInstance*i,U32 l0);

void s20retdecInstantiate(s20retdecInstance* instance, void* resolve(const char* module, const char* name));

void s20retdecFreeInstance(s20retdecInstance* instance);

#endif /* s20retdec_H */

