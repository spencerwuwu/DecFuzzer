#ifndef s75retdec_H
#define s75retdec_H

#include "w2c2_base.h"

typedef struct s75retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s75retdecInstance;

void f0(s75retdecInstance*);

void f1(s75retdecInstance*);

U32 f2(s75retdecInstance*);

void f3(s75retdecInstance*,U32);

U32 f4(s75retdecInstance*,U32,U32,U32,U32);

void f5(s75retdecInstance*,U32,U32,U32,U32,U32);

void f6(s75retdecInstance*,U32);

void f7(s75retdecInstance*,U32,U32,U32);

void f8(s75retdecInstance*,U32,U32,U32);

void s75retdec____wasm_call_ctors(s75retdecInstance*i);

void s75retdec____wasm_apply_data_relocs(s75retdecInstance*i);

U32 s75retdec_func_1(s75retdecInstance*i);

void s75retdec_call_cb(s75retdecInstance*i,U32 l0);

void s75retdecInstantiate(s75retdecInstance* instance, void* resolve(const char* module, const char* name));

void s75retdecFreeInstance(s75retdecInstance* instance);

#endif /* s75retdec_H */

