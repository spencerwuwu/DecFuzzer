#ifndef s833retdec_H
#define s833retdec_H

#include "w2c2_base.h"

typedef struct s833retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s833retdecInstance;

void f0(s833retdecInstance*);

void f1(s833retdecInstance*);

U32 f2(s833retdecInstance*);

void f3(s833retdecInstance*,U32);

void f4(s833retdecInstance*,U32);

void s833retdec____wasm_call_ctors(s833retdecInstance*i);

void s833retdec____wasm_apply_data_relocs(s833retdecInstance*i);

U32 s833retdec_func_1(s833retdecInstance*i);

void s833retdec_call_cb(s833retdecInstance*i,U32 l0);

void s833retdecInstantiate(s833retdecInstance* instance, void* resolve(const char* module, const char* name));

void s833retdecFreeInstance(s833retdecInstance* instance);

#endif /* s833retdec_H */

