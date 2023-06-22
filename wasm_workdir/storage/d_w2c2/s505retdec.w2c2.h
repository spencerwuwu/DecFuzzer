#ifndef s505retdec_H
#define s505retdec_H

#include "w2c2_base.h"

typedef struct s505retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s505retdecInstance;

void f0(s505retdecInstance*);

void f1(s505retdecInstance*);

U32 f2(s505retdecInstance*);

void f3(s505retdecInstance*,U32);

U32 f4(s505retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s505retdecInstance*,U32,U32,U32,U32,U32);

void f6(s505retdecInstance*,U32);

void f7(s505retdecInstance*,U32,U32,U32);

void f8(s505retdecInstance*,U32,U32,U32);

void s505retdec____wasm_call_ctors(s505retdecInstance*i);

void s505retdec____wasm_apply_data_relocs(s505retdecInstance*i);

U32 s505retdec_func_1(s505retdecInstance*i);

void s505retdec_call_cb(s505retdecInstance*i,U32 l0);

void s505retdecInstantiate(s505retdecInstance* instance, void* resolve(const char* module, const char* name));

void s505retdecFreeInstance(s505retdecInstance* instance);

#endif /* s505retdec_H */

