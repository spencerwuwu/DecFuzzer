#ifndef s504retdec_H
#define s504retdec_H

#include "w2c2_base.h"

typedef struct s504retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s504retdecInstance;

void f0(s504retdecInstance*);

void f1(s504retdecInstance*);

U32 f2(s504retdecInstance*);

void f3(s504retdecInstance*,U32);

U32 f4(s504retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s504retdecInstance*,U32,U32,U32,U32,U32);

void f6(s504retdecInstance*,U32);

void f7(s504retdecInstance*,U32,U32,U32);

void f8(s504retdecInstance*,U32,U32,U32);

void s504retdec____wasm_call_ctors(s504retdecInstance*i);

void s504retdec____wasm_apply_data_relocs(s504retdecInstance*i);

U32 s504retdec_func_1(s504retdecInstance*i);

void s504retdec_call_cb(s504retdecInstance*i,U32 l0);

void s504retdecInstantiate(s504retdecInstance* instance, void* resolve(const char* module, const char* name));

void s504retdecFreeInstance(s504retdecInstance* instance);

#endif /* s504retdec_H */

