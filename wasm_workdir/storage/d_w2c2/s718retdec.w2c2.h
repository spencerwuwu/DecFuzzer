#ifndef s718retdec_H
#define s718retdec_H

#include "w2c2_base.h"

typedef struct s718retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s718retdecInstance;

void f0(s718retdecInstance*);

void f1(s718retdecInstance*);

U32 f2(s718retdecInstance*);

void f3(s718retdecInstance*,U32);

U32 f4(s718retdecInstance*,U32,U32,U32,U32);

void f5(s718retdecInstance*,U32,U32,U32,U32,U32);

void f6(s718retdecInstance*,U32);

void f7(s718retdecInstance*,U32,U32,U32);

void f8(s718retdecInstance*,U32,U32,U32);

void s718retdec____wasm_call_ctors(s718retdecInstance*i);

void s718retdec____wasm_apply_data_relocs(s718retdecInstance*i);

U32 s718retdec_func_1(s718retdecInstance*i);

void s718retdec_call_cb(s718retdecInstance*i,U32 l0);

void s718retdecInstantiate(s718retdecInstance* instance, void* resolve(const char* module, const char* name));

void s718retdecFreeInstance(s718retdecInstance* instance);

#endif /* s718retdec_H */

