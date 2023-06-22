#ifndef s193retdec_H
#define s193retdec_H

#include "w2c2_base.h"

typedef struct s193retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s193retdecInstance;

void f0(s193retdecInstance*);

void f1(s193retdecInstance*);

U32 f2(s193retdecInstance*);

void f3(s193retdecInstance*,U32);

U32 f4(s193retdecInstance*,U32,U32,U32,U32,U32);

void f5(s193retdecInstance*,U32,U32,U32,U32,U32);

void f6(s193retdecInstance*,U32);

void f7(s193retdecInstance*,U32,U32,U32);

void f8(s193retdecInstance*,U32,U32,U32);

void s193retdec____wasm_call_ctors(s193retdecInstance*i);

void s193retdec____wasm_apply_data_relocs(s193retdecInstance*i);

U32 s193retdec_func_1(s193retdecInstance*i);

void s193retdec_call_cb(s193retdecInstance*i,U32 l0);

void s193retdecInstantiate(s193retdecInstance* instance, void* resolve(const char* module, const char* name));

void s193retdecFreeInstance(s193retdecInstance* instance);

#endif /* s193retdec_H */

