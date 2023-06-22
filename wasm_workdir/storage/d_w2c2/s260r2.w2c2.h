#ifndef s260r2_H
#define s260r2_H

#include "w2c2_base.h"

typedef struct s260r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s260r2Instance;

void f0(s260r2Instance*);

void f1(s260r2Instance*);

U32 f2(s260r2Instance*);

void f3(s260r2Instance*,U32);

U32 f4(s260r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s260r2Instance*,U32,U32,U32,U32,U32);

void f6(s260r2Instance*,U32);

void f7(s260r2Instance*,U32,U32,U32);

void f8(s260r2Instance*,U32,U32,U32);

void s260r2____wasm_call_ctors(s260r2Instance*i);

void s260r2____wasm_apply_data_relocs(s260r2Instance*i);

U32 s260r2_func_1(s260r2Instance*i);

void s260r2_call_cb(s260r2Instance*i,U32 l0);

void s260r2Instantiate(s260r2Instance* instance, void* resolve(const char* module, const char* name));

void s260r2FreeInstance(s260r2Instance* instance);

#endif /* s260r2_H */

