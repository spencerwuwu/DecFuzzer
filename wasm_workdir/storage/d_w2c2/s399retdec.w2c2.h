#ifndef s399retdec_H
#define s399retdec_H

#include "w2c2_base.h"

typedef struct s399retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s399retdecInstance;

void f0(s399retdecInstance*);

void f1(s399retdecInstance*);

U32 f2(s399retdecInstance*);

void f3(s399retdecInstance*,U32);

U32 f4(s399retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s399retdecInstance*,U32,U32,U32,U32,U32);

void f6(s399retdecInstance*,U32);

void f7(s399retdecInstance*,U32,U32,U32);

void f8(s399retdecInstance*,U32,U32,U32);

void s399retdec____wasm_call_ctors(s399retdecInstance*i);

void s399retdec____wasm_apply_data_relocs(s399retdecInstance*i);

U32 s399retdec_func_1(s399retdecInstance*i);

void s399retdec_call_cb(s399retdecInstance*i,U32 l0);

void s399retdecInstantiate(s399retdecInstance* instance, void* resolve(const char* module, const char* name));

void s399retdecFreeInstance(s399retdecInstance* instance);

#endif /* s399retdec_H */

