#ifndef s714retdec_H
#define s714retdec_H

#include "w2c2_base.h"

typedef struct s714retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s714retdecInstance;

void f0(s714retdecInstance*);

void f1(s714retdecInstance*);

U32 f2(s714retdecInstance*);

void f3(s714retdecInstance*,U32);

U32 f4(s714retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s714retdecInstance*,U32,U32,U32,U32,U32);

void f6(s714retdecInstance*,U32);

void f7(s714retdecInstance*,U32,U32,U32);

void f8(s714retdecInstance*,U32,U32,U32);

void s714retdec____wasm_call_ctors(s714retdecInstance*i);

void s714retdec____wasm_apply_data_relocs(s714retdecInstance*i);

U32 s714retdec_func_1(s714retdecInstance*i);

void s714retdec_call_cb(s714retdecInstance*i,U32 l0);

void s714retdecInstantiate(s714retdecInstance* instance, void* resolve(const char* module, const char* name));

void s714retdecFreeInstance(s714retdecInstance* instance);

#endif /* s714retdec_H */

