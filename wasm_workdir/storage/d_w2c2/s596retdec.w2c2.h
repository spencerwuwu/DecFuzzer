#ifndef s596retdec_H
#define s596retdec_H

#include "w2c2_base.h"

typedef struct s596retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s596retdecInstance;

void f0(s596retdecInstance*);

void f1(s596retdecInstance*);

U32 f2(s596retdecInstance*);

void f3(s596retdecInstance*,U32);

U32 f4(s596retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s596retdecInstance*,U32,U32,U32,U32,U32);

void f6(s596retdecInstance*,U32);

void f7(s596retdecInstance*,U32,U32,U32);

void f8(s596retdecInstance*,U32,U32,U32);

void s596retdec____wasm_call_ctors(s596retdecInstance*i);

void s596retdec____wasm_apply_data_relocs(s596retdecInstance*i);

U32 s596retdec_func_1(s596retdecInstance*i);

void s596retdec_call_cb(s596retdecInstance*i,U32 l0);

void s596retdecInstantiate(s596retdecInstance* instance, void* resolve(const char* module, const char* name));

void s596retdecFreeInstance(s596retdecInstance* instance);

#endif /* s596retdec_H */

