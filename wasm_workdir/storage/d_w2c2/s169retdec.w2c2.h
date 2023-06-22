#ifndef s169retdec_H
#define s169retdec_H

#include "w2c2_base.h"

typedef struct s169retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s169retdecInstance;

void f0(s169retdecInstance*);

void f1(s169retdecInstance*);

U32 f2(s169retdecInstance*);

void f3(s169retdecInstance*,U32);

void f4(s169retdecInstance*,U32);

void s169retdec____wasm_call_ctors(s169retdecInstance*i);

void s169retdec____wasm_apply_data_relocs(s169retdecInstance*i);

U32 s169retdec_func_1(s169retdecInstance*i);

void s169retdec_call_cb(s169retdecInstance*i,U32 l0);

void s169retdecInstantiate(s169retdecInstance* instance, void* resolve(const char* module, const char* name));

void s169retdecFreeInstance(s169retdecInstance* instance);

#endif /* s169retdec_H */

