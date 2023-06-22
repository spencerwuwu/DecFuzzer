#ifndef s721retdec_H
#define s721retdec_H

#include "w2c2_base.h"

typedef struct s721retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s721retdecInstance;

void f0(s721retdecInstance*);

void f1(s721retdecInstance*);

U32 f2(s721retdecInstance*);

void f3(s721retdecInstance*,U32);

U32 f4(s721retdecInstance*,U32,U32,U32);

void f5(s721retdecInstance*,U32,U32,U32,U32,U32);

void f6(s721retdecInstance*,U32);

void f7(s721retdecInstance*,U32,U32,U32);

void f8(s721retdecInstance*,U32,U32,U32);

void s721retdec____wasm_call_ctors(s721retdecInstance*i);

void s721retdec____wasm_apply_data_relocs(s721retdecInstance*i);

U32 s721retdec_func_1(s721retdecInstance*i);

void s721retdec_call_cb(s721retdecInstance*i,U32 l0);

void s721retdecInstantiate(s721retdecInstance* instance, void* resolve(const char* module, const char* name));

void s721retdecFreeInstance(s721retdecInstance* instance);

#endif /* s721retdec_H */

